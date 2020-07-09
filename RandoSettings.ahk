#NoEnv 							; don't populate environment variables automatically
#SingleInstance, Force          ; One instance to prevent mismatches in settings
SetWorkingDir, %A_ScriptDir%	; start where we at

; Reading the settings file and setting variables
inipath = C:\moon\settings.ini
if not (FileExist(inipath)) {
    MsgBox, 16, Ori WotW Rando Settings editor - Error, File C:\moon\settings.ini not found!
    ExitApp, 1
}

IniRead, varSkipUpdate, %inipath%, Flags, SkipUpdate, false
IniRead, varLaunchTracker, %inipath%, Flags, LaunchWithTracker, false
IniRead, varShowShortCutscenes, %inipath%, Flags, ShowShortCutscenes, false
IniRead, varShowLongCutscenes, %inipath%, Flags, ShowLongCutscenes, false
IniRead, varUseWinStore, %inipath%, Flags, UseWinStore, false
IniRead, varCursorLock, %inipath%, Flags, CursorLock, false
IniRead, varInvertSwim, %inipath%, Flags, InvertSwim, false
IniRead, varDisableDebug, %inipath%, Flags, DisableDebugControls, false
IniRead, varDisableQuestSnap, %inipath%, Flags, QuestFocusOnAbility3, false

IniRead, varSteamPath, %inipath%, Paths, Steam


parseNumtoBool(var) {
    If (var == 1) 
        return "true"
    return "false"
}


parseBooltoNum(var) {
    If (var == "true") 
        Return 1
    Return 0
}

; Parsing the booleans into somehting AHK can work with    
ahkvarShowShortCutscenes := parseBooltoNum(varShowShortCutscenes)
ahkvarShowLongCutscenes := parseBooltoNum(varShowLongCutscenes)
ahkvarUseWinStore := parseBooltoNum(varUseWinStore)
ahkvarCursorLock := parseBooltoNum(varCursorLock)
ahkvarInvertSwim := parseBooltoNum(varInvertSwim)
ahkvarDisableDebug := parseBooltoNum(varDisableDebug)
ahkvarAutoUpdate := 1-parseBooltoNum(varSkipUpdate)
ahkvarDisableQuestSnap := parseBooltoNum(varDisableQuestSnap)
ahkVarLaunchTracker := parseBooltoNum(varLaunchTracker)

; Adding all the buttons and text in the Window.

col2 := 260

Gui, Font, s15
Gui, Add, Text, Center, Ori WotW Randomizer settings

Gui, Font, s10 italic
Gui, Add, Text, x20, (mouse over options for more info)
Gui, Font, s10 norm

Gui, Add, Text, x20 section, Setting
Gui, Add, Text, x%col2% ys, Enabled

Gui, Add, Text, x20 y+20 section, Cursor Lock
Gui, Add, Checkbox, x%col2% ys checked%ahkvarCursorLock% vahkvarCursorLock gwritetofile

Gui, Add, Text, x20 section, Invert Swim Speeds
Gui, Add, Checkbox, x%col2% ys checked%ahkvarInvertSwim% vahkvarInvertSwim gwritetofile

Gui, Add, Text, x20 section, Disable Quest Snap on Mouseover
Gui, Add, Checkbox, x%col2% ys checked%ahkvarDisableQuestSnap% vahkvarDisableQuestSnap gwritetofile

Gui, Add, Text, x20 section, Disable Debug Controls
Gui, Add, Checkbox, x%col2% ys checked%ahkvarDisableDebug% vahkvarDisableDebug gwritetofile

Gui, Add, Text, x20 y+30 section, Restore Short Cutscenes
Gui, Add, Checkbox, x%col2% ys checked%ahkvarShowShortCutscenes% vahkvarShowShortCutscenes gwritetofile

Gui, Add, Text, x20 section, Restore Long Cutscenes
Gui, Add, Checkbox, x%col2% ys checked%ahkvarShowLongCutscenes% vahkvarShowLongCutscenes gwritetofile

Gui, Add, Text, x20 y+30 section, Launch with Item Tracker
Gui, Add, Checkbox, x%col2% ys checked%ahkvarLaunchTracker% vahkvarLaunchTracker gwritetofile

Gui, Add, Text, x20 section, Automatic Updates
Gui, Add, Checkbox, x%col2% ys checked%ahkvarAutoUpdate% vahkvarAutoUpdate gwritetofile

Gui, Add, Text, x20 section, Use Windows Store
Gui, Add, Checkbox, x%col2% ys checked%ahkvarUseWinStore% vahkvarUseWinStore gwritetofile

Gui, Add, Text, x20 y+30, Steam path:
Gui, Add, Text, x20 vvarSteamPath, %varSteamPath%
Gui, Add, Button, x20 section gchangesteampath, Change Steam path
Gui, Add, Button, x%col2% ys gquit, Done

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
    varShowShortCutscenes := parseNumtoBool(ahkvarShowShortCutscenes)
    varShowLongCutscenes := parseNumtoBool(ahkvarShowLongCutscenes)
    varUseWinStore := parseNumtoBool(ahkvarUseWinStore)
    varCursorLock := parseNumtoBool(ahkvarCursorLock)
    varInvertSwim := parseNumtoBool(ahkvarInvertSwim)
    varDisableDebug := parseNumToBool(ahkvarDisableDebug)
    varDisableQuestSnap := parseNumtoBool(ahkvarDisableQuestSnap)
    varLaunchTracker := parseNumtoBool(ahkvarLaunchTracker)

    varSkipUpdate := parseNumtoBool(1-ahkvarAutoUpdate)

    ; Writing the new values to file.
    IniWrite, %varSkipUpdate%, %inispath%, Flags, SkipUpdate
    IniWrite, %varShowShortCutscenes%, %inipath%, Flags, ShowShortCutscenes
    IniWrite, %varShowLongCutscenes%, %inipath%, Flags, ShowLongCutscenes
    IniWrite, %varUseWinStore%, %inipath%, Flags, UseWinStore
    IniWrite, %varCursorLock%, %inipath%, Flags, CursorLock
    IniWrite, %varInvertSwim%, %inipath%, Flags, InvertSwim
    IniWrite, %varDisableDebug%, %inipath%, Flags, DisableDebugControls
    IniWrite, %varDisableQuestSnap%, %inipath%, Flags, QuestFocusOnAbility3
    IniWrite, %varLaunchTracker%, %inipath%, Flags, LaunchWithTracker

    IniWrite, %varSteamPath%, %inipath%, Paths, Steam
    return


Help(wParam, lParam, Msg) {
    MouseGetPos,,,, OutputVarControl
    ControlGetText, HoverText, %OutputVarControl%
    IfEqual, HoverText, Cursor Lock ; Text based recognition didnt seem to work sadly.
        Help := "Locks the cursor to the game window, preventing the mouse from moving off screen."
    else IfEqual, HoverText, Invert Swim Speeds
        Help := "Inverts the hold-space-to-swim-faster mechanic.`nHolding space will make you swim slower instead."
    else IfEqual, HoverText, Disable Quest Snap on Mouseover
        Help := "Checking this option prevents the map from scrolling to a quest location when hovering over a quest in the`nquest list. (You can still scroll to a quest by pressing your Ability3 bind while hovering)"

    else IfEqual, HoverText, Disable Debug Controls
        Help := "Disables debug controls on game launch.`nToggle debug controls on/off with Ctrl+Alt+D."

    else IfEqual, HoverText, Restore Short Cutscenes
        Help := "Enables the short-but-unskippable cutscenes normally removed by the randomizer."
        
    else IfEqual, HoverText, Restore Long Cutscenes
        Help := "Enables the long, unskippable cutscenes normally removed by the randomizer."

    else IfEqual, HoverText, Automatic Updates
        Help := "Allows the randomizer to check for new updates on launch. Highly recommended!"

    else IfEqual, HoverText, Use Windows Store
        Help := "Launch the rando using the windows store version of the game."

    else IfEqual, HoverText, Launch with Item Tracker
        Help := "Automatically open the item tracker when launching the randomizer"


    SetTimer, DisableTT, -3000
    ToolTip % Help
}

DisableTT:
ToolTip,
return



GuiClose:
ExitApp
