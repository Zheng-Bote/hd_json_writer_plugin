<div id="top"></div>
<br />
<div align="center">
<h2 align="center">header_docu_qt-hd_json_writer_plugin</h2>

  <p align="center">
      JSON writer plugin for header_docu_qt
    <br />
    <br />
    <a href="https://github.com/Zheng-Bote/hd_json_writer_plugin/issues">Report Bug</a>
    ·
    <a href="https://github.com/Zheng-Bote/hd_json_writer_plugin/issues">Request Feature</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#screenshots-and-samples">Screenshots and Samples</a></li>

  </ol>
</details>

<!-- ABOUT THE PROJECT -->

### About the Project 

**JSON writer plugin for header_docu_qt (e.g. \*.c[pp], \*.h[pp], ...)**

*short description:*

_still in progress_

### built with

Build on GNU/Linux with QT 6.5 C++17 


## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->

## Contact

ZHENG Robert Zhèng Bó Tè 郑 伯特

Project Link: [https://github.com/Zheng-Bote/header_docu_qt/](https://github.com/Zheng-Bote/header_docu_qt/)


## Screenshots and Samples

**sample JSON output**

```
[
    {
        "data": {
            "AUTHOR": "ZHENG Robert",
            "BRIEF": "header_docu_cpp (main.cpp)",
            "COMMENT": "keinen",
            "COPYRIGHT": "ZHENG Robert",
            "DATE": "",
            "DEPENDENCIES": "cxxopts\na lightweight C++ option parser library, supporting the standard GNU\nstyle syntax for options. https//github.com/jarro2783/cxxopts License gpl2",
            "DESC": "header_docu_cpp is a small nafty C++ commandline tool to read the first\ncomment block of a textfile and outputs it as HTML5- or markdown- snippet",
            "DESCRIPTION": "",
            "FILE": "",
            "FILE_LastModified_localtime": "2023-04-21 18:16:54",
            "FILE_Name": "header_docu_cpp.cpp",
            "FILE_Perm_AlphaNumeric": "-rwxr-xr-x",
            "FILE_Perm_Numeric": "755",
            "FILE_SHA256_Hash": "ca6005c228c409b643b47335b6de1f53efc8bb190b41d5d15c2665b517ceb690",
            "FILE_Scan_UTCcurrent": "2023-04-21 16:24:38",
            "FILE_Scan_localTime": "2023-04-21 18:24:38",
            "FILE_Size": "6773",
            "FILE_absolutePath": "/media/zb_bamboo/500GB/Dev/CPP/header_docu_cpp/src",
            "FILE_baseDirName": "src",
            "FILE_baseFileName": "header_docu_cpp",
            "FILE_completeSuffix": "cpp",
            "FILE_created_localtime": "2023-04-10 08:49:22",
            "FILE_lastModified_humanUTC": "2023-04-21 16:16:54",
            "FILE_lastModified_stringUTC": "2023-04-21_16-16-54",
            "FILE_lastModified_timeUTC": "2023-04-21T16:16:54Z",
            "FILE_lastModified_timeUtcOffset": "UTC+02:00",
            "FILE_lastModified_timeZAbbreviation": "CEST",
            "HISTORY": "Version | Date       | Developer | Comments\n--------|------------|-----------|------------------------------------\n0.1.0   | 2023-03-24 | RZheng    | created                            |\n0.2.0   | 2023-03-31 | RZheng    | file permission added              |\n0.2.0   | 2023-03-31 | RZheng    | SHA2-256 filehash added            |\n0.3.0   | 2023-04-02 | RZheng    | separated to MacOS                 |\n0.4.0   | 2023-04-02 | RZheng    | Linux threads added to file output |",
            "LICENSE": "",
            "SOURCE": "https//github.com/Zheng-Bote/header_docu",
            "SYNTAX": "header_docu -h | header_docu --help\n-d, --dir arg     parse directory (default .)\n-e, --ext arg     file extension (default .h)\n-f, --file arg    1 single textfile path/file\n-o, --out arg     output type md | html | json | csv | adoc (default\nhtml)\n-s, --single arg  single output files yes | no (default yes)\n-t, --target arg  target output dir (default ./header_docu_cpp/)\n-h, --help        Print usage\n-v, --version     Version\nEXAMPLES\n/usr/local/bin/header_docu --dir . --ext h --out md // read/parse all *.h\nfiles in the current directory /usr/local/bin/header_docu --file\n~/DEV/CPP/header_docu/main.cpp --out html // read/parse single file and output\nas HTML5 snippet\nRETURN\noutput.md | output.html void",
            "TITLE": "start.cpp",
            "VERSION": "0.4.0"
        },
        "name": "header_docu_cpp.cpp"
    }
]
```


### the end

:vulcan_salute:

<p align="right">(<a href="#top">back to top</a>)</p>
