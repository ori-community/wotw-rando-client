#SingleInstance, Force
SendMode Input
SetWorkingDir, %A_ScriptDir%
#Include WatchFolder.ahk
#Include JSON.ahk
SetBatchLines, -1
; TODO Decide on keeping/removing manual toggling

; Reading the settings file and setting variables
inipath = C:\moon\settings.ini
IniRead, launchWithTracker, %inipath%, Flags, LaunchWithTracker, false
if(launchWithTracker != "false"){
    WinWait, OriAndTheWilloftheWisps
    SetTimer, IsOriStillRunning, 500
}

version := "v0.1.4"
; data containers
imageBase := { "Bash": "img\Bash"
    , "Blaze": "img\Blaze"
    , "Bow": "img\Bow"
    , "Burrow": "img\Burrow"
    , "Shuriken": "img\Shuriken"
    , "Dash": "img\Dash"
    , "DoubleJump": "img\DoubleJump"
    , "Flap": "img\Flap"
    , "Flash": "img\Flash" 
    , "Feather": "img\Feather" 
    , "Grapple": "img\Grapple" 
    , "Hammer": "img\Hammer" 
    , "Launch": "img\Launch" 
    , "LightBurst": "img\LightBurst" 
    , "Regenerate": "img\Regen" 
    , "Sentry": "img\Sentry"
    , "Spike": "img\Spike" 
    , "WaterDash": "img\WaterDash" 
    , "Sword": "img\Sword" 
    , "WaterBreath": "img\WaterBreath" 
    , "DamageUp": "img\WeaponUpgrade1" }

imageCurr := { "Bash": "img\Bash.png"
    , "Blaze": "img\Blaze.png"
    , "Bow": "img\Bow.png"
    , "Burrow": "img\Burrow.png"
    , "Shuriken": "img\Shuriken.png"
    , "Dash": "img\Dash.png"
    , "DoubleJump": "img\DoubleJump.png"
    , "Flap": "img\Flap.png"
    , "Flash": "img\Flash.png" 
    , "Feather": "img\Feather.png" 
    , "Grapple": "img\Grapple.png" 
    , "Hammer": "img\Hammer.png" 
    , "Launch": "img\Launch.png" 
    , "LightBurst": "img\LightBurst.png" 
    , "Regenerate": "img\Regen.png" 
    , "Sentry": "img\Sentry.png"
    , "Spike": "img\Spike.png" 
    , "WaterDash": "img\WaterDash.png" 
    , "Sword": "img\Sword.png" 
    , "WaterBreath": "img\WaterBreath.png" 
    , "DamageUp": "img\WeaponUpgrade1.png" }

; -------------------------------------
; Startup stuff
if !FileExist(img)
    FileCreateDir, img  

FileInstall, img\Bash.png, img\Bash.png
FileInstall, img\Bash_unlocked.png, img\Bash_unlocked.png
FileInstall, img\Blaze.png, img\Blaze.png
FileInstall, img\Blaze_unlocked.png, img\Blaze_unlocked.png
FileInstall, img\Blaze_upgrade.png, img\Blaze_upgrade.png
FileInstall, img\Bow.png, img\Bow.png
FileInstall, img\Bow_unlocked.png, img\Bow_unlocked.png
FileInstall, img\Burrow.png, img\Burrow.png
FileInstall, img\Burrow_unlocked.png, img\Burrow_unlocked.png
FileInstall, img\CompleteWatermillEscape.png, img\CompleteWatermillEscape.png
FileInstall, img\CompleteWatermillEscape_unlocked.png, img\CompleteWatermillEscape_unlocked.png
FileInstall, img\Dash.png, img\Dash.png
FileInstall, img\Dash_unlocked.png, img\Dash_unlocked.png
FileInstall, img\DoubleJump.png, img\DoubleJump.png
FileInstall, img\DoubleJump_unlocked.png, img\DoubleJump_unlocked.png
FileInstall, img\Feather.png, img\Feather.png
FileInstall, img\Feather_unlocked.png, img\Feather_unlocked.png
FileInstall, img\Flap.png, img\Flap.png
FileInstall, img\Flap_unlocked.png, img\Flap_unlocked.png
FileInstall, img\Flash.png, img\Flash.png
FileInstall, img\Flash_unlocked.png, img\Flash_unlocked.png
FileInstall, img\Grapple.png, img\Grapple.png
FileInstall, img\Grapple_unlocked.png, img\Grapple_unlocked.png
FileInstall, img\Hammer.png, img\Hammer.png
FileInstall, img\Hammer_unlocked.png, img\Hammer_unlocked.png
FileInstall, img\Hammer_upgrade.png, img\Hammer_upgrade.png
FileInstall, img\Keystone.png, img\Keystone.png
FileInstall, img\Launch.png, img\Launch.png
FileInstall, img\Launch_unlocked.png, img\Launch_unlocked.png
FileInstall, img\LightBurst.png, img\LightBurst.png
FileInstall, img\LightBurst_unlocked.png, img\LightBurst_unlocked.png
FileInstall, img\Regen.png, img\Regen.png
FileInstall, img\Regen_unlocked.png, img\Regen_unlocked.png
FileInstall, img\Sein.png, img\Sein.png
FileInstall, img\Sentry.png, img\Sentry.png
FileInstall, img\Sentry_unlocked.png, img\Sentry_unlocked.png
FileInstall, img\Sentry_upgrade.png, img\Sentry_upgrade.png
FileInstall, img\Shuriken.png, img\Shuriken.png
FileInstall, img\Shuriken_unlocked.png, img\Shuriken_unlocked.png
FileInstall, img\Shuriken_upgrade.png, img\Shuriken_upgrade.png
FileInstall, img\Spike.png, img\Spike.png
FileInstall, img\Spike_unlocked.png, img\Spike_unlocked.png
FileInstall, img\Spike_upgrade.png, img\Spike_upgrade.png
FileInstall, img\SpiritLight.png, img\SpiritLight.png
FileInstall, img\Sword.png, img\Sword.png
FileInstall, img\Sword_unlocked.png, img\Sword_unlocked.png
FileInstall, img\Teleporter.png, img\Teleporter.png
FileInstall, img\WaterBreath.png, img\WaterBreath.png
FileInstall, img\WaterBreath_unlocked.png, img\WaterBreath_unlocked.png
FileInstall, img\WaterDash.png, img\WaterDash.png
FileInstall, img\WaterDash_unlocked.png, img\WaterDash_unlocked.png
FileInstall, img\WeaponUpgrade1.png, img\WeaponUpgrade1.png
FileInstall, img\WeaponUpgrade1_unlocked.png, img\WeaponUpgrade1_unlocked.png
FileInstall, img\WeaponUpgrade2.png, img\WeaponUpgrade2.png
FileInstall, img\WeaponUpgrade2_unlocked.png, img\WeaponUpgrade2_unlocked.png
FileInstall, img\GorlekOre.png, img\GorlekOre.png


If !WatchFolder("C:\moon", "parsechanges",, 8) {
    MsgBox, 0, Error, Error starting the tracker: Call of WatchFolder() failed!
    Return
}

; -------------------------------------
; Creating the Gui

Gui, Color, 585858
Gui, Font, s15 cwhite
Gui, Add, Text, , Ori WotW AutoTracker

first_row = y40
Gui, Add, Picture, vDoubleJump x0 %first_row% h75 w75 gclick, img\DoubleJump.png
Gui, Add, Picture, vRegenerate xp+80 %first_row% h75 w75 gclick, img\Regen.png
Gui, Add, Picture, vBow xp+80 %first_row% h75 w75 gclick, img\Bow.png
Gui, Add, Picture, vDash xp+80 %first_row% h75 w75 gclick, img\Dash.png

second_row = y120
Gui, Add, Picture, vBash x0 %second_row% h75 w75 gclick, img\Bash.png
Gui, Add, Picture, VGrapple xp+80 %second_row% h75 w75 gclick, img\Grapple.png
Gui, Add, Picture, vFeather xp+80 %second_row% h75 w75 gclick, img\Feather.png
Gui, Add, Picture, vFlap xp+80 %second_row% h75 w75 gclick, img\Flap.png

third_row = y200
Gui, Add, Picture, vLightBurst x0 %third_row% h75 w75 gclick, img\LightBurst.png
Gui, Add, Picture, vFlash xp+80 %third_row% h75 w75 gclick, img\Flash.png
Gui, Add, Picture, vWaterDash xp+80 %third_row% h75 w75 gclick, img\WaterDash.png
Gui, Add, Picture, vBurrow xp+80 %third_row% h75 w75 gclick, img\Burrow.png

fourth_row = y280
Gui, Add, Picture, vlaunch x0 %fourth_row% h75 w75 gclick, img\Launch.png
Gui, Add, Picture, vSentry xp+80 %fourth_row% h75 w75 gclick, img\Sentry.png
Gui, Add, Picture, VHammer xp+80 %fourth_row% h75 w75 gclick, img\Hammer.png
Gui, Add, Picture, vShuriken xp+80 %fourth_row% h75 w75 gclick, img\Shuriken.png

fifth_row = y360
Gui, Add, Picture, vSpike x0 %fifth_row% h75 w75 gclick, img\Spike.png
Gui, Add, Picture, vBlaze xp+80 %fifth_row% h75 w75 gclick, img\Blaze.png
Gui, Add, Picture, vWaterBreath xp+80 %fifth_row% h75 w75 gclick, img\WaterBreath.png
Gui, Add, Picture, vDamageUp xp+80 %fifth_row% h75 w75 gclick, img\WeaponUpgrade1.png

sixth_row = y440
Gui, Add, Picture, x0 %sixth_row% h75 w75, img\SpiritLight.png
Gui, Add, Text, vSpiritLight x65 y465 w50, 0

Gui, Add, Picture, x125 %sixth_row% h75 w75, img\GorlekOre.png
Gui, Add, Text, vGorlekOre x190 y465 w50, 0

Gui, Add, Picture, vCleanWater x240 %sixth_row% h75 w75 Hidden, img\CompleteWatermillEscape.png


Gui, Show,, Ori WotW AutoTracker %version%
update()

OnMessage(0x200, "Help") ; On_mousemove event
Return
IsOriStillRunning:
IfWinNotExist, OriAndTheWilloftheWisps 
ExitApp
return
; Function for manually toggling items
 click:
 return
;     MouseGetPos,,,, OutputVarControl
;     ControlGetText, HoverText, %OutputVarControl%
;     if (HoverText == "img\Bash.png") {
;         if (skillstate["Bash"] == 0) {
;             GuiControl , ,Bash , img\Bash_unlocked.png
;             skillstate["Bash"] := 1
;         } else if (skillstate["Bash"] == 1) {
;             GuiControl , ,Bash , img\Bash.png
;             skillstate["Bash"] := 0
;         }
;     }
;     else if (HoverText == "img\Blaze.png") {
;         if (skillstate["Blaze"] == 0) {
;             GuiControl , ,Blaze , img\Blaze_unlocked.png
;             skillstate["Blaze"] := 1
;         } else if (skillstate["Blaze"] == 1) {
;             GuiControl , ,Blaze , img\Blaze_upgrade.png
;             skillstate["Blaze"] := 2
;         } else if (skillstate["Blaze"] == 2) {
;             GuiControl , ,Blaze , img\Blaze.png
;             skillstate["Blaze"] := 0
;         }
;     }

; Function that gets called when a change is detected in the trackfile.
parsechanges(Folder, Changes) {
    For Each, Change In Changes
        If (change.Action == 3 and change.Name == "C:\moon\trackfile.json") {
            update()
        }
}   


update() {
    global skillstate, currentinv, imageBase
    FileRead jsonString, C:\moon\trackfile.json
    
    ; Skip parsing if there are no changes
    if (currentinv == jsonString) {
;        return
    }

    inventory := JSON.Load(jsonString)
    skills := inventory.skills
    upgraded := inventory.upgraded
    events := inventory.events
    spiritlight := inventory.spiritlight
    Keystones := inventory.keystones
    GorlekOre := inventory.ore

    for skill, i in imageBase {
        if(hasVal(skills, skill)) {
            if(hasVal(upgraded, skill)) 
                setIfNew(skill,upgradedImage(skill))
            else 
                setIfNew(skill,unlockedImage(skill))
        }
            else
                setIfNew(skill,lockedImage(skill))

    }


    For index, event in events
        if (event == "Clean Water") {
            GuiControl , Show ,CleanWater
        }

    GuiControl,, SpiritLight, % Spiritlight
    GuiControl,, GorlekOre, % GorlekOre

    ; Store last inventory to check against with next proc
    currentinv := jsonString

}
; Hover text for each of the items.
Help(wParam, lParam, Msg) {
    MouseGetPos,,,, OutputVarControl
    ControlGetText, HoverText, %OutputVarControl%
    IfEqual, HoverText, img\Bash.png
        Help := "Bash"
    else IfEqual, HoverText, img\Bow.png
        Help := "Bow | Spirit Arc"
    else IfEqual, HoverText, img\Blaze.png
        Help := "Blaze"
    else IfEqual, HoverText, img\Launch.png
        Help := "Launch"
    else IfEqual, HoverText, img\DoubleJump.png
        Help := "Double Jump"
    else IfEqual, HoverText, img\Bow.png
        Help := "Bow"
    else IfEqual, HoverText, img\Grapple.png
        Help := "Grapple"
    else IfEqual, HoverText, img\LightBurst.png
        Help := "Light Burst"
    else IfEqual, HoverText, img\Sentry.png
        Help := "Sentry"
    else IfEqual, HoverText, img\Regen.png
        Help := "Regenerate"
    else IfEqual, HoverText, img\Feather.png
        Help := "Feather | Glide"
    else IfEqual, HoverText, img\Flash.png
        Help := "Flash"
    else IfEqual, HoverText, img\WaterBreath.png
        Help := "Water Breath"
    else IfEqual, HoverText, img\WaterDash.png
        Help := "Water Dash"
    else IfEqual, HoverText, img\Hammer.png
        Help := "Hammer"
    else IfEqual, HoverText, img\Shuriken.png
        Help := "Shuriken | Chakra"
    else IfEqual, HoverText, img\Spike.png
        Help := "Spear | Spike"
    else IfEqual, HoverText, img\Blaze.png
        Help := "Blaze"
    else IfEqual, HoverText, img\Dash.png
        Help := "Dash"
    else IfEqual, HoverText, img\Burrow.png
        Help := "Burrow"
    else IfEqual, HoverText, img\Flap.png
        Help := "Flap"
    else IfEqual, HoverText, img\WeaponUpgrade1.png
        Help := "Ancestral Light"
    else IfEqual, HoverText, img\SpiritLight.png
        Help := "Spirit Light"
    else IfEqual, HoverText, img\GorlekOre.png
        Help := "Gorlek Ore"
    else IfEqual, HoverText, img\CompleteWatermillEscape.png
        Help := "Clean Water"
    
    ToolTip % Help
    SetTimer, DisableTT, -3000
}

DisableTT:
    ToolTip, 
    return


setIfNew(skill, image){
    global imageCurr
    if(image != imageCurr[skill]) {
        GuiControl ,, %skill%, %image%
        imageCurr[skill] := image
    }
}

internalName(skill) {
    if(skill == "Ancestral Light")
        return "DamageUp"
    return StrReplace(skill, " ")
}

lockedImage(skill) {
    global imageBase
    return % imageBase[skill] ".png"
}

unlockedImage(skill) {
    global imageBase
    return % imageBase[skill] "_unlocked.png"
}

upgradedImage(skill) {
    global imageBase
    if(skill == "DamageUp") 
        return "img\WeaponUpgrade2_unlocked.png"
    return % imageBase[skill] "_upgrade.png"
}


HasVal(haystack, needle) {
    for index, value in haystack
        if (value = needle)
            return index
;    if !(IsObject(haystack)) 'd rather not throw this error
;        throw Exception("Bad haystack!", -1, haystack)
    return 0
}


GuiClose:
    ExitApp
