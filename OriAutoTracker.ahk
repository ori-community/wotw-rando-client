#SingleInstance, Force
SendMode Input
SetWorkingDir, %A_ScriptDir%
#Include WatchFolder.ahk
#Include JSON.ahk

; TODO Decide on keeping/removing manual toggling

version := "v0.1.1"

; -------------------------------------
; Startup stuff
if !FileExist(img)
    FileCreateDir, img  

FileInstall, .\img\Bash.png, .\img\Bash.png
FileInstall, .\img\Bash_unlocked.png, .\img\Bash_unlocked.png
FileInstall, .\img\Blaze.png, .\img\Blaze.png
FileInstall, .\img\Blaze_unlocked.png, .\img\Blaze_unlocked.png
FileInstall, .\img\Blaze_upgrade.png, .\img\Blaze_upgrade.png
FileInstall, .\img\Bow.png, .\img\Bow.png
FileInstall, .\img\Bow_unlocked.png, .\img\Bow_unlocked.png
FileInstall, .\img\Burrow.png, .\img\Burrow.png
FileInstall, .\img\Burrow_unlocked.png, .\img\Burrow_unlocked.png
FileInstall, .\img\CompleteWatermillEscape.png, .\img\CompleteWatermillEscape.png
FileInstall, .\img\CompleteWatermillEscape_unlocked.png, .\img\CompleteWatermillEscape_unlocked.png
FileInstall, .\img\Dash.png, .\img\Dash.png
FileInstall, .\img\Dash_unlocked.png, .\img\Dash_unlocked.png
FileInstall, .\img\DoubleJump.png, .\img\DoubleJump.png
FileInstall, .\img\DoubleJump_unlocked.png, .\img\DoubleJump_unlocked.png
FileInstall, .\img\Feather.png, .\img\Feather.png
FileInstall, .\img\Feather_unlocked.png, .\img\Feather_unlocked.png
FileInstall, .\img\Flap.png, .\img\Flap.png
FileInstall, .\img\Flap_unlocked.png, .\img\Flap_unlocked.png
FileInstall, .\img\Flash.png, .\img\Flash.png
FileInstall, .\img\Flash_unlocked.png, .\img\Flash_unlocked.png
FileInstall, .\img\Grapple.png, .\img\Grapple.png
FileInstall, .\img\Grapple_unlocked.png, .\img\Grapple_unlocked.png
FileInstall, .\img\Hammer.png, .\img\Hammer.png
FileInstall, .\img\Hammer_unlocked.png, .\img\Hammer_unlocked.png
FileInstall, .\img\Hammer_upgrade.png, .\img\Hammer_upgrade.png
FileInstall, .\img\Keystone.png, .\img\Keystone.png
FileInstall, .\img\Launch.png, .\img\Launch.png
FileInstall, .\img\Launch_unlocked.png, .\img\Launch_unlocked.png
FileInstall, .\img\LightBurst.png, .\img\LightBurst.png
FileInstall, .\img\LightBurst_unlocked.png, .\img\LightBurst_unlocked.png
FileInstall, .\img\Regen.png, .\img\Regen.png
FileInstall, .\img\Regen_unlocked.png, .\img\Regen_unlocked.png
FileInstall, .\img\Sein.png, .\img\Sein.png
FileInstall, .\img\Sentry.png, .\img\Sentry.png
FileInstall, .\img\Sentry_unlocked.png, .\img\Sentry_unlocked.png
FileInstall, .\img\Sentry_upgrade.png, .\img\Sentry_upgrade.png
FileInstall, .\img\Shuriken.png, .\img\Shuriken.png
FileInstall, .\img\Shuriken_unlocked.png, .\img\Shuriken_unlocked.png
FileInstall, .\img\Shuriken_upgrade.png, .\img\Shuriken_upgrade.png
FileInstall, .\img\Spike.png, .\img\Spike.png
FileInstall, .\img\Spike_unlocked.png, .\img\Spike_unlocked.png
FileInstall, .\img\Spike_upgrade.png, .\img\Spike_upgrade.png
FileInstall, .\img\SpiritLight.png, .\img\SpiritLight.png
FileInstall, .\img\Sword.png, .\img\Sword.png
FileInstall, .\img\Sword_unlocked.png, .\img\Sword_unlocked.png
FileInstall, .\img\Teleporter.png, .\img\Teleporter.png
FileInstall, .\img\WaterBreath.png, .\img\WaterBreath.png
FileInstall, .\img\WaterBreath_unlocked.png, .\img\WaterBreath_unlocked.png
FileInstall, .\img\WaterDash.png, .\img\WaterDash.png
FileInstall, .\img\WaterDash_unlocked.png, .\img\WaterDash_unlocked.png
FileInstall, .\img\WeaponUpgrade1.png, .\img\WeaponUpgrade1.png
FileInstall, .\img\Weaponupgrade1_unlocked.png, .\img\Weaponupgrade1_unlocked.png
FileInstall, .\img\WeaponUpgrade2.png, .\img\WeaponUpgrade2.png
FileInstall, .\img\WeaponUpgrade2_unlocked.png, .\img\WeaponUpgrade2_unlocked.png

TTTimeout := 0

If !WatchFolder("C:\moon", "parsechanges",, 8) {
    MsgBox, 0, Error, Error starting the tracker: Call of WatchFolder() failed!
    Return
}

; Dict for keeping track of the current version of a skill
skillstate := {"Bash": 0
    ,"Blaze": 0
    ,"Bow": 0
    ,"Burrow": 0
    ,"Shuriken": 0
    ,"Dash": 0
    ,"DoubleJump": 0
    ,"Flap": 0
    ,"Flash" : 0
    ,"Feather" : 0
    ,"Grapple" : 0
    ,"Hammer" : 0
    ,"Launch" : 0
    ,"LightBurst" : 0
    ,"Regenerate" : 0
    ,"Spike" : 0
    ,"SwimDash" : 0
    ,"Sword" : 0
    ,"WaterBreath" : 0
    ,"WeaponUpgrade" : 0}

; -------------------------------------
; Creating the Gui

Gui, Color, 585858
Gui, Font, s15 cwhite
Gui, Add, Text, , Ori WotW AutoTracker

first_row = y40
Gui, Add, Picture, vDash x0 %first_row% h75 w75 gclick, .\img\Dash.png
Gui, Add, Picture, vBash xp+80 %first_row% h75 w75 gclick, .\img\Bash.png
Gui, Add, Picture, vBurrow xp+80 %first_row% h75 w75 gclick, .\img\Burrow.png
Gui, Add, Picture, vlaunch xp+80 %first_row% h75 w75 gclick, .\img\Launch.png

second_row = y120
Gui, Add, Picture, vDoubleJump x0 %second_row% h75 w75 gclick, .\img\DoubleJump.png
Gui, Add, Picture, vBow xp+80 %second_row% h75 w75 gclick, .\img\Bow.png
Gui, Add, Picture, VGrapple xp+80 %second_row% h75 w75 gclick, .\img\Grapple.png
Gui, Add, Picture, vFeather xp+80 %second_row% h75 w75 gclick, .\img\Feather.png

third_row = y200
Gui, Add, Picture, vLightBurst x0 %third_row% h75 w75 gclick, .\img\LightBurst.png
Gui, Add, Picture, vSentry xp+80 %third_row% h75 w75 gclick, .\img\Sentry.png
Gui, Add, Picture, vRegenerate xp+80 %third_row% h75 w75 gclick, .\img\Regen.png
Gui, Add, Picture, vFlap xp+80 %third_row% h75 w75 gclick, .\img\Flap.png

fourth_row = y280
Gui, Add, Picture, vFlash x0 %fourth_row% h75 w75 gclick, .\img\Flash.png
Gui, Add, Picture, vWaterBreath xp+80 %fourth_row% h75 w75 gclick, .\img\WaterBreath.png
Gui, Add, Picture, vWaterDash xp+80 %fourth_row% h75 w75 gclick, .\img\WaterDash.png
Gui, Add, Picture, VHammer xp+80 %fourth_row% h75 w75 gclick, .\img\Hammer.png

fifth_row = y360
Gui, Add, Picture, vShuriken x0 %fifth_row% h75 w75 gclick, .\img\Shuriken.png
Gui, Add, Picture, vSpike xp+80 %fifth_row% h75 w75 gclick, .\img\Spike.png
Gui, Add, Picture, vBlaze xp+80 %fifth_row% h75 w75 gclick, .\img\Blaze.png
Gui, Add, Picture, vWeaponUpgrade xp+80 %fifth_row% h75 w75 gclick, .\img\WeaponUpgrade1.png

sixth_row = y440
Gui, Add, Picture, x0 %sixth_row% h75 w75, .\img\SpiritLight.png
Gui, Add, Text, vSpiritLight x65 y465 w50, 0

Gui, Add, Picture, x125 %sixth_row% h75 w75, .\img\Keystone.png
Gui, Add, Text, vKeystones x190 y465 w50, 0

Gui, Add, Picture, vCleanWater x240 %sixth_row% h75 w75 Hidden, .\img\CompleteWatermillEscape.png


Gui, Show,, Ori WotW AutoTracker %version%

OnMessage(0x200, "Help") ; On_mousemove event
Return

; Function for manually toggling items
click:
    MouseGetPos,,,, OutputVarControl
    ControlGetText, HoverText, %OutputVarControl%
    if (HoverText == ".\img\Bash.png") {
        if (skillstate["Bash"] == 0) {
            GuiControl , ,Bash , .\img\Bash_unlocked.png
            skillstate["Bash"] := 1
        } else if (skillstate["Bash"] == 1) {
            GuiControl , ,Bash , .\img\Bash.png
            skillstate["Bash"] := 0
        }
    }
    else if (HoverText == ".\img\Blaze.png") {
        if (skillstate["Blaze"] == 0) {
            GuiControl , ,Blaze , .\img\Blaze_unlocked.png
            skillstate["Blaze"] := 1
        } else if (skillstate["Blaze"] == 1) {
            GuiControl , ,Blaze , .\img\Blaze_upgrade.png
            skillstate["Blaze"] := 2
        } else if (skillstate["Blaze"] == 2) {
            GuiControl , ,Blaze , .\img\Blaze.png
            skillstate["Blaze"] := 0
        }
    }

; Function that gets called when a change is detected in the trackfile.
parsechanges(Folder, Changes) {
    global skillstate
    For Each, Change In Changes
        If (change.Action == 3 and change.Name == "C:\moon\trackfile.json") {
            FileRead jsonString, C:\moon\trackfile.json
            
            ; Skip parsing if there are no changes
            if (currentinv == jsonString) {
                return
            }

            inventory := JSON.Load(jsonString)
            skills := inventory.skills
            events := inventory.events
            spiritlight := inventory.spiritlight
            Keystones := inventory.keystones

            For index, skill in skills
                if (skill == "Dash" and skillstate["Dash"] == 0) {
                    GuiControl , ,Dash , .\img\Dash_unlocked.png
                    skillstate["Dash"] := 1
                }
                else if (skill == "Bash" and skillstate["Bash"] == 0) {
                    GuiControl , ,Bash , .\img\Bash_unlocked.png
                    skillstate["Bash"] := 1
                }
                else if (skill == "Burrow" and skillstate["Burrow"] == 0) {
                    GuiControl , ,Burrow , .\img\Burrow_unlocked.png
                    skillstate["Burrow"] := 1
                }
                else if (skill == "Launch" and skillstate["Launch"] == 0) {
                    GuiControl , ,Launch , .\img\Launch_unlocked.png
                    skillstate["Launch"] := 1
                }
                else if (skill == "Double Jump" and skillstate["DoubleJump"] == 0) {
                    GuiControl , ,DoubleJump , .\img\DoubleJump_unlocked.png
                    skillstate["DoubleJump"] := 1
                }
                else if (skill == "Bow" and skillstate["Bow"] == 0) {
                    GuiControl , ,Bow , .\img\Bow_unlocked.png
                    skillstate["Bow"] := 1
                }
                else if (skill == "Grapple" and skillstate["Grapple"] == 0) {
                    GuiControl , ,Grapple , .\img\Grapple_unlocked.png
                    skillstate["Grapple"] := 1
                }
                else if (skill == "Feather" and skillstate["Feather"] == 0 ) {
                    GuiControl , ,Feather , .\img\Feather_unlocked.png
                    skillstate["Feather"] := 1
                }
                else if (skill == "Light Burst" and skillstate["LightBurst"] == 0) {
                    GuiControl , ,LightBurst , .\img\LightBurst_unlocked.png
                    skillstate["LightBurst"] := 1
                }
                else if (skill == "Sentry" and skillstate["Sentry"] == 0) {
                    GuiControl , ,Sentry , .\img\Sentry_unlocked.png
                    skillstate["Sentry"] := 1
                }
                else if (skill == "SentryUpgraded" and skillstate["Sentry"] == 1) {
                    GuiControl , ,Sentry , .\img\Sentry_upgrade.png
                    skillstate["Sentry"] := 2
                }
                else if (skill == "Regenerate" and skillstate["Regenerate"] == 0) {
                    GuiControl , ,Regenerate , .\img\Regen_unlocked.png
                    skillstate["Regenerate"] := 1
                }
                else if (skill == "Flap" and skillstate["Flap"] == 0) {
                    GuiControl , ,Flap , .\img\Flap_unlocked.png
                    skillstate["Flap"] := 1
                }
                else if (skill == "Flash" and skillstate["Flash"] == 0) {
                    GuiControl , ,Flash , .\img\Flash_unlocked.png
                    skillstate["Flash"] := 1
                }
                else if (skill == "Water Breath" and skillstate["WaterBreath"] == 0) { 
                    GuiControl , ,WaterBreath , .\img\WaterBreath_unlocked.png
                    skillstate["WaterBreath"] := 1
                }
                else if (skill == "Water Dash" and skillstate["WaterDash"] == 0) {
                    GuiControl , ,WaterDash , .\img\WaterDash_unlocked.png
                    skillstate["WaterDash"] := 1
                }
                else if (skill == "Hammer" and skillstate["Hammer"] == 0) {
                    GuiControl , ,Hammer , .\img\Hammer_unlocked.png
                    skillstate["Hammer"] := 1
                }
                else if (skill == "HammerUpgraded" and skillstate["Hammer"] < 2) {
                    GuiControl , ,Hammer , .\img\Hammer_upgrade.png
                    skillstate["Hammer"] := 2
                }
                else if (skill == "Shuriken" and skillstate["Shuriken"] == 0) {
                    GuiControl , ,Shuriken , .\img\Shuriken_unlocked.png
                    skillstate["Shuriken"] := 1
                }
                else if (skill == "ShurikenUpgraded" and skillstate["Shuriken"] < 2) {
                    GuiControl , ,Shuriken , .\img\Shuriken_upgrade.png
                    skillstate["Shuriken"] := 2
                }
                else if (skill == "Spike" and skillstate["Spike"] == 0) {
                    GuiControl , ,Spike , .\img\Spike_unlocked.png
                    skillstate["Spike"] := 1
                }
                else if (skill == "SpikeUpgraded" and skillstate["Spike"] < 2) {
                    GuiControl , ,Spike , .\img\Spike_upgrade.png
                    skillstate["Spike"] := 2
                }
                else if (skill == "Blaze" and skillstate["Blaze"] == 0) {
                    GuiControl , ,Blaze , .\img\Blaze_unlocked.png
                    skillstate["Blaze"] := 1
                }
                else if (skill == "BlazeUpgraded" and skillstate["Blaze"] < 2) {
                    GuiControl , ,Blaze , .\img\Blaze_upgrade.png
                    skillstate["Blaze"] := 2
                }
                else if (skill == "Ancestral Light" and skillstate["WeaponUpgrade"] == 0) {
                    GuiControl , ,WeaponUpgrade1 , .\img\WeaponUpgrade1_unlocked.png
                    skillstate["WeaponUpgrade"] := 1
                }
                else if (skill == "Ancestral Light" and skillstate["WeaponUpgrade"] < 2) {
                    GuiControl , ,WeaponUpgrade1 , .\img\WeaponUpgrade2_unlocked.png
                    skillstate["WeaponUpgrade"] := 2
                }

            For index, event in events
                if (event == "Clean Water") {
                    GuiControl , Show ,CleanWater
                }

            GuiControl,, SpiritLight, % Spiritlight
            GuiControl,, Keystones, % Keystones
            
            ; Store last inventory to check against with next proc
            currentinv := jsonString
        }
}   

; Hover text for each of the items.
Help(wParam, lParam, Msg) {
    MouseGetPos,,,, OutputVarControl
    ControlGetText, HoverText, %OutputVarControl%
    Global TTTimeout
    IfEqual, HoverText, .\img\Bash.png
        Help := "Bash"
    else IfEqual, HoverText, .\img\Bow.png
        Help := "Bow | Spirit Arc"
    else IfEqual, HoverText, .\img\Blaze.png
        Help := "Blaze"
    else IfEqual, HoverText, .\img\Launch.png
        Help := "Launch"
    else IfEqual, HoverText, .\img\DoubleJump.png
        Help := "Double Jump"
    else IfEqual, HoverText, .\img\Bow.png
        Help := "Bow"
    else IfEqual, HoverText, .\img\Grapple.png
        Help := "Grapple"
    else IfEqual, HoverText, .\img\LightBurst.png
        Help := "Light Burst"
    else IfEqual, HoverText, .\img\Sentry.png
        Help := "Sentry"
    else IfEqual, HoverText, .\img\Regen.png
        Help := "Regenerate"
    else IfEqual, HoverText, .\img\Feather.png
        Help := "Feather | Glide"
    else IfEqual, HoverText, .\img\Flash.png
        Help := "Flash"
    else IfEqual, HoverText, .\img\WaterBreath.png
        Help := "Water Breath"
    else IfEqual, HoverText, .\img\WaterDash.png
        Help := "Water Dash"
    else IfEqual, HoverText, .\img\Hammer.png
        Help := "Hammer"
    else IfEqual, HoverText, .\img\Shuriken.png
        Help := "Shuriken"
    else IfEqual, HoverText, .\img\Spike.png
        Help := "Spear | Spike"
    else IfEqual, HoverText, .\img\Blaze.png
        Help := "Blaze"
    else IfEqual, HoverText, .\img\Dash.png
        Help := "Dash"
    else IfEqual, HoverText, .\img\Burrow.png
        Help := "Burrow"
    else IfEqual, HoverText, .\img\Flap.png
        Help := "Flap"
    else IfEqual, HoverText, .\img\SpiritLight.png
        Help := "Spirit Light"
    else IfEqual, HoverText, .\img\Keystone.png
        Help := "Keystones"
    else IfEqual, HoverText, .\img\CompleteWatermillEscape.png
        Help := "Clean Water"
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

