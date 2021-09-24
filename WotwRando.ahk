; WotwRando.exe
; Installer / patcher / launcher for the ori and the will of the wisps randomizer
#NoEnv                          ; don't populate environment variables automatically
SetWorkingDir, %A_ScriptDir%    ; start where we at
SetTitleMatchMode, 3            ; require a full match of window name
FileEncoding, UTF-8-RAW
#SingleInstance, force

INSTALL_DIR := A_ScriptDir . "\"

argc = %0%
seedfile = %1%
if(argc > 0 and seedfile != "")  {

    ; if a seedfile was provided as an argument (presumably by doubleclicking),
    ; load it in 
    FileDelete, %INSTALL_DIR%.currentseedpath
    SplitPath, 1, FileName
    FileAppend, %1%, %INSTALL_DIR%.currentseedpath
}
EnvGet, A_LocalAppData, LocalAppData
FileDelete, FilePattern  %A_LocalAppData%\wotwrpath.tmp
FileAppend, %INSTALL_DIR%, %A_LocalAppData%\wotwrpath.tmp

SplashTextOn,,,Getting latest version...
Try {
    whr := ComObjCreate("WinHttp.WinHttpRequest.5.1")
    whr.Open("GET", "https://api.github.com/repos/ori-rando/build/releases/latest", false)
    whr.Send() ; first

    RegExMatch(whr.ResponseText, "O)""tag_name"":""([^"",]*)""",tag)
    tag := tag.1

    RegExMatch(whr.ResponseText, "O)""body"":""(.*)""}",ReleaseNotes)
    ReleaseNotes := ReleaseNotes.1
    ReleaseNotes := StrReplace(ReleaseNotes, "\r\n", "`r`n")
    ReleaseNotes := StrReplace(ReleaseNotes, "\", "") ; Remove any escape characters (such as /") so they show up normally.

    RegExMatch(whr.ResponseText, "O)""size"":([^"",]*)",DLsize) ; Please don't look at this. I needed the second match okay...
    DLsize := DLsize.1

    SplashTextOn,,,Checking release %tag%

        SplashTextOff
        Msgbox 4, Install and download new launcher?, With the launch of 1.0, a new launcher is required! `n Download and install it now?
        IfMsgBox, Yes 
        {
            message = 0x1100
            Progress, M h80 w500, , .
            OnMessage(message, "SetCounter")
            Download("https://github.com/ori-rando/build/releases/download/"  tag  "/WotwRandoSetup.exe", INSTALL_DIR "WotwRandoSetup.exe", DLsize, message, 50)
            Progress, Off
            SplashTextOff
            msgbox The new installer has been downloaded! Press Ok to run it
            EnvGet, A_LocalAppData, LocalAppData
            FileDelete, %A_LocalAppData%\wotwrpath.tmp
            FileAppend, %INSTALL_DIR%, %A_LocalAppData%\wotwrpath.tmp
            Run, %INSTALL_DIR%WotwRandoSetup.exe
        } 

}  catch e {
    errorMsg := "Error: " e.Message
    msgbox Update check failed! Please retry, or get the new version manually at https://wotw.orirando.com/installer`n%errorMsg%
}
SplashTextOff
ExitApp
Return

SetCounter(wParam, lParam) {
    global url
    progress := Round(wParam / lParam * 100)
    wParam := (wParam // 1024) // 1024
    lParam := (lParam // 1024) // 1024
    Progress, %progress%, %url%, Downloading %wParam%MB of about %lParam%MB..., %progress%`% - Downloading...
}

Download(url, save, DLsize, msg = 0x1100, sleep = 250) {
    SetTimer, _dlprocess, %sleep%
    UrlDownloadToFile, %url%, %save%
    SetTimer, _dlprocess, Off
    Return, ErrorLevel
    _dlprocess:
    FileGetSize, current, %save%, K
    Process, Exist
    PostMessage, msg, current * 1024, DLsize, , ahk_pid %ErrorLevel%
    Exit
}


