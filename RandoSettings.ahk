#NoEnv 							; don't populate environment variables automatically
#SingleInstance, Force          ; One instance to prevent mismatches in settings
SetWorkingDir, %A_ScriptDir%	; start where we at

; Reading the settings file and setting variables
inipath = C:\moon\settings.ini

if not (FileExist(inipath)) {
    MsgBox, 16, Ori WotW Rando Settings editor - Error, File C:\moon\settings.ini not found!
    ExitApp, 1
}

IniRead, varSkipUpdate, %inipath%, Flags, SkipUpdate
IniRead, varShowShortCutscenes, %inipath%, Flags, ShowShortCutscenes
IniRead, varShowLongCutscenes, %inipath%, Flags, ShowLongCutscenes
IniRead, varUseWinStore, %inipath%, Flags, UseWinStore
IniRead, varCursorLock, %inipath%, Flags, CursorLock
IniRead, varInvertSwim, %inipath%, Flags, InvertSwim

IniRead, varSteamPath, %inipath%, Paths, Steam


parseNumtoBool(var) {
    ; Function to convert a value from the ahk format to a boolean format.
    If (var == 1) {
        returnvar = true
    } else {
        returnvar = false
    }
    Return returnvar
}


parseBooltoNum(var) {
    ; Function to convert a value from the ini boolean format to the ahk format.
    If (var == "true") {
        returnvar = 1
    } else {
        returnvar = 0
    }
    Return returnvar
}

; Parsing the booleans into somehting AHK can work with    
ahkvarSkipUpdate := parseBooltoNum(varSkipUpdate)
ahkvarShowShortCutscenes := parseBooltoNum(varShowShortCutscenes)
ahkvarShowLongCutscenes := parseBooltoNum(varShowLongCutscenes)
ahkvarUseWinStore := parseBooltoNum(varUseWinStore)
ahkvarCursorLock := parseBooltoNum(varCursorLock)
ahkvarInvertSwim := parseBooltoNum(varInvertSwim)

; Adding all the buttons and text in the Window.
Gui, Font, s15
Gui, Add, Text, x20 y19, Ori WotW Rando settings

Gui, Font, s10
Gui, Add, Text, x20 y60, Setting
Gui, Add, Text, x180 y60, Enabled

Gui, Add, Text, x20 y80 w200 h20, CursorLock
Gui, Add, Checkbox, x180 y80 checked%ahkvarCursorLock% vahkvarCursorLock gwritetofile

Gui, Add, Text, x20 y120 w200 h20, InvertSwim
Gui, Add, Checkbox, x180 y120 checked%ahkvarInvertSwim% vahkvarInvertSwim gwritetofile

Gui, Add, Text, x20 y160 w200 h20, ShowShortCutscenes
Gui, Add, Checkbox, x180 y160 checked%ahkvarShowShortCutscenes% vahkvarShowShortCutscenes gwritetofile

Gui, Add, Text, x20 y200 w200 h20, ShowLongCutscenes
Gui, Add, Checkbox, x180 y200 checked%ahkvarShowLongCutscenes% vahkvarShowLongCutscenes gwritetofile

Gui, Add, Text, x20 y280, SkipUpdate
Gui, Add, Checkbox, x180 y280 checked%ahkvarSkipUpdate% vahkvarSkipUpdate gwritetofile

Gui, Add, Text, x20 y320 w200 h20, UseWinStore
Gui, Add, Checkbox, x180 y320 checked%ahkvarUseWinStore% vahkvarUseWinStore gwritetofile

Gui, Add, Text, x20 y410 w200 h20, Steam path
Gui, Add, Text, x20 y430 w320 h30, %varSteamPath%
Gui, Add, Button, x20 y460 gchangesteampath, Change Steam path

Gui, Show, x640 y276 h500 w400, Ori WotW Rando Settings Editor

OnMessage(0x200, "Help")
Return


changesteampath:
    ; Function that gets called when the change button is pressed
    oldsteampath := varSteamPath
    FileSelectFile, varSteamPath, 3,, Select Steam.exe, *.exe ; Possibly want to use the missing arg with the current location. have to split %varSteamPath% into folder and file for that.
    ControlSetText, %oldsteampath%, %varSteamPath%
    gosub, writetofile
    Return


writetofile:
    ; Function that's called when the save button is pressed.
    Gui, Submit, NoHide
    
    ; Parsing the ahk variables back into boolean format
    varSkipUpdate := parseNumtoBool(ahkvarSkipUpdate)
    varShowShortCutscenes := parseNumtoBool(ahkvarShowShortCutscenes)
    varShowLongCutscenes := parseNumtoBool(ahkvarShowLongCutscenes)
    varUseWinStore := parseNumtoBool(ahkvarUseWinStore)
    varCursorLock := parseNumtoBool(ahkvarCursorLock)
    varInvertSwim := parseNumtoBool(ahkvarInvertSwim)

    ; Writing the new values to file.
    IniWrite, %varSkipUpdate%, %inispath%, Flags, SkipUpdate
    IniWrite, %varShowShortCutscenes%, %inipath%, Flags, ShowShortCutscenes
    IniWrite, %varShowLongCutscenes%, %inipath%, Flags, ShowLongCutscenes
    IniWrite, %varUseWinStore%, %inipath%, Flags, UseWinStore
    IniWrite, %varCursorLock%, %inipath%, Flags, CursorLock
    IniWrite, %varInvertSwim%, %inipath%, Flags, InvertSwim

    IniWrite, %varSteamPath%, %inipath%, Paths, Steam
    return


Help(wParam, lParam, Msg) {
    MouseGetPos,,,, OutputVarControl
    IfEqual, OutputVarControl, Static4 ; Text based recognition didnt seem to work sadly.
        Help := "Locks the cursor to the game, preventing the mouse from moving off screen."

    else IfEqual, OutputVarControl, Static5
        Help := "Inverts the hold-space-to-swim-faster mechanic, meaning holding space will make you swim slower."

    else IfEqual, OutputVarControl, Static6
        Help := "Enables the shorter cutscenes in game."
        
    else IfEqual, OutputVarControl, Static7
        Help := "Enabled the longer cutscenes in game."

    else IfEqual, OutputVarControl, Static8
        Help := "Prevents the rando from updating to a newer version."

    else IfEqual, OutputVarControl, Static9
        Help := "Causes the rando use the windows store version of the game."

    ToolTip % Help
}


GuiClose:
ExitApp
