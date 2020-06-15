#NoEnv 							; don't populate environment variables automatically
#SingleInstance, Force          ; One instance to prevent mismatches in settings
SetWorkingDir, %A_ScriptDir%	; start where we at

; Reading the settings file and setting variables
inipath = C:\moon\settings.ini
TTTimeout := 0
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
IniRead, varDisableDebug, %inipath%, Flags, DisableDebugControls

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
ahkvarDisableDebug := parseBooltoNum(varDisableDebug)

; Adding all the buttons and text in the Window.
Gui, Font, s15
Gui, Add, Text, Center, Ori WotW Rando settings

Gui, Font, s10 italic
Gui, Add, Text, x20, (mouse over options for more info)
Gui, Font, s10 norm

Gui, Add, Text, x20 section, Setting
Gui, Add, Text, x220 ys, Enabled

Gui, Add, Text, x20 section, Cursor Lock
Gui, Add, Checkbox, x220 ys checked%ahkvarCursorLock% vahkvarCursorLock gwritetofile

Gui, Add, Text, x20 section, Invert Swim Speeds
Gui, Add, Checkbox, x220 ys checked%ahkvarInvertSwim% vahkvarInvertSwim gwritetofile

Gui, Add, Text, x20 section, Disable Debug Controls
Gui, Add, Checkbox, x220 ys checked%ahkvarDisableDebug% vahkvarDisableDebug gwritetofile

Gui, Add, Text, x20 y+30 section, Restore Short Cutscenes
Gui, Add, Checkbox, x220 ys checked%ahkvarShowShortCutscenes% vahkvarShowShortCutscenes gwritetofile

Gui, Add, Text, x20 section, Restore Long Cutscenes
Gui, Add, Checkbox, x220 ys checked%ahkvarShowLongCutscenes% vahkvarShowLongCutscenes gwritetofile

Gui, Add, Text, x20 y+30 section, Disable Automatic Updates
Gui, Add, Checkbox, x220 ys checked%ahkvarSkipUpdate% vahkvarSkipUpdate gwritetofile

Gui, Add, Text, x20 section, Use Windows Store
Gui, Add, Checkbox, x220 ys checked%ahkvarUseWinStore% vahkvarUseWinStore gwritetofile

Gui, Add, Text, x20 y+30, Steam path:
Gui, Add, Text, x20 vvarSteamPath, %varSteamPath%
Gui, Add, Button, x20 section gchangesteampath, Change Steam path
Gui, Add, Button, x220 ys gquit, Done

Gui, Show, , WotW Rando Settings

OnMessage(0x200, "Help")
Return

quit:
if(!A_IsCompiled)
    Reload
ExitApp

changesteampath:
; label that gets called when the change button is pressed
oldsteampath := varSteamPath
SplitPath, oldsteampath,, oldDir
FileSelectFile, varSteamPath, 3, %oldDir%, Select Steam.exe, *.exe ; Possibly want to use the missing arg with the current location. have to split %varSteamPath% into folder and file for that.
if (varSteamPath= "") {
    varSteamPath := oldsteampath
    return
}
GuiControl, Text, varSteamPath, %varSteamPath%
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
    varDisableDebug := parseNumToBool(ahkvarDisableDebug)

    ; Writing the new values to file.
    IniWrite, %varSkipUpdate%, %inispath%, Flags, SkipUpdate
    IniWrite, %varShowShortCutscenes%, %inipath%, Flags, ShowShortCutscenes
    IniWrite, %varShowLongCutscenes%, %inipath%, Flags, ShowLongCutscenes
    IniWrite, %varUseWinStore%, %inipath%, Flags, UseWinStore
    IniWrite, %varCursorLock%, %inipath%, Flags, CursorLock
    IniWrite, %varInvertSwim%, %inipath%, Flags, InvertSwim
    IniWrite, %varDisableDebug%, %inipath%, Flags, DisableDebugControls

    IniWrite, %varSteamPath%, %inipath%, Paths, Steam
    return


Help(wParam, lParam, Msg) {
    MouseGetPos,,,, OutputVarControl
    Global TTTimeout
    IfEqual, OutputVarControl, Static5 ; Text based recognition didnt seem to work sadly.
        Help := "Locks the cursor to the game window, preventing the mouse from moving off screen."

    else IfEqual, OutputVarControl, Static6
        Help := "Inverts the hold-space-to-swim-faster mechanic, meaning holding space will make you swim slower."

    else IfEqual, OutputVarControl, Static7
        Help := "Disables debug controls on game launch. (Toggle debug controls on/off with Ctrl+Alt+D)."

    else IfEqual, OutputVarControl, Static8
        Help := "Enables the short-but-unskippable cutscenes normally removed by the rando."
        
    else IfEqual, OutputVarControl, Static9
        Help := "Enables the long, unskippable cutscenes normally removed by the rando."

    else IfEqual, OutputVarControl, Static10
        Help := "Prevents the rando from updating to a newer version. Not recommended!"

    else IfEqual, OutputVarControl, Static11
        Help := "Launch the rando using the windows store version of the game."

    else {
        if(TTTimeout == 0) {
            TTTimeout := 1
            SetTimer, DisableTT, -3000
            return
        }
    }

    ToolTip % Help
}

DisableTT:
TTTImeout := 0
return



GuiClose:
ExitApp
