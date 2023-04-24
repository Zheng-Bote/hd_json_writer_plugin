/**
 * @file hd_json_writer_plugin.cpp
 * @author ZHENG Robert (www.robert.hase-zheng.net)
 * @brief JSon writer plugin for header_docu
 * @details JSon array of JSon objects
 * @version 1.0.0
 * @date 2023-04-21
 *
 * @copyright Copyright (c) ZHENG Robert 2023
 *
 */

#include "hd_json_writer_plugin.h"

Hd_json_writer_plugin::Hd_json_writer_plugin(QObject *parent)
{
    Q_UNUSED(parent);
    qDebug() << "Plugin Constructor";
}

Hd_json_writer_plugin::~Hd_json_writer_plugin()
{
    qDebug() << "Plugin Deconstructed";
}

void Hd_json_writer_plugin::test(QString name)
{
    qInfo() << "Test from Plugin: " << PLUGIN_SHORTNAME << ": " << name;
}

QString Hd_json_writer_plugin::getName()
{
    return PLUGIN_SHORTNAME;
}

QString Hd_json_writer_plugin::getVersion()
{
    return PLUGIN_NAME + "-v" + PLUGIN_VERSION;
}

void Hd_json_writer_plugin::parseFile(QMap<QString, QString> &mapParseKeys, QString pathToFile)
{

}

void Hd_json_writer_plugin::writeFile(QMap<QString, QString> mapParseKeys, QMap<QString, QString> mapFileAttribs, QString pathToFile)
{
    QFile file(pathToFile);
    QString jsonStr = "{}";
    QJsonDocument jDoc = QJsonDocument::fromJson(jsonStr.toUtf8());
    QJsonObject jSub;
    QJsonObject jObj = jDoc.object();
    QJsonArray jArr{};
    jObj["name"] = mapFileAttribs["FILE_Name"];

    for (auto [key, val] : mapFileAttribs.asKeyValueRange()) {
        jSub[key] = val;
    }
    for (auto [key, val] : mapParseKeys.asKeyValueRange()) {
        jSub[key] = val.trimmed();
    }

    jObj["data"] = jSub;
    jArr.append(jObj);
    jDoc.setArray(jArr);

    if(file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        stream << jDoc.toJson();
        file.close();
    }
}
