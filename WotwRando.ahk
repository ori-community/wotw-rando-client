; WotwRando.exe
; Installer / patcher / launcher for the ori and the will of the wisps randomizer
#NoEnv 							; don't populate environment variables automatically
SetWorkingDir, %A_ScriptDir%	; start where we at
SetTitleMatchMode, 3 			; require a full match of window name

; script variables (mostly file paths)
INSTALL_DIR := "C:\moon\"
INI_FILE := INSTALL_DIR . "settings.ini"
VCR_FILE := INSTALL_DIR . "VC_redist.x64.exe"
INJECTOR := INSTALL_DIR . "Injector.exe"
WOTWREXE := INSTALL_DIR . "WotwRando.exe"
NEWWOTWR := INSTALL_DIR . "WotwRando.new.exe"
DELETEME := INSTALL_DIR . ".deleteme"

; this is just for the download bar; the exe is currently basically always 48 MB

FILE_SIZE := 48  

; this is how you write multiline strings in AHK. it's terrible. 
; this specifically is just the 2-line batchfile for  
; associating .wotwr files with WotwRando.exe
batch=
(
assoc .wotwr=WotwRando
ftype WotwRando="%INSTALL_DIR%WotwRando.exe" "`%`%1" `%`%*
)


; filecreatedir silent fails if it exists, so we won't bother checking if it's already there
FileCreateDir %INSTALL_DIR%

; get the version number of the existing exe first thing
FileInstall, VERSION, %INSTALL_DIR%.VERSION, 1
FileRead, MY_VER, %INSTALL_DIR%.VERSION

; check for an existing installation by seeing if
; there's a VERSION file in the install directory
if(FileExist(INSTALL_DIR . "VERSION")) {
	FileRead, INSTALL_VER, %INSTALL_DIR%VERSION
	; check if this exe is a newer version from the one installed
	if(!semver_validate(INSTALL_VER) Or (semver_validate(MY_VER) and  semver_compare(MY_VER, INSTALL_VER) == 1)) {
		; update; write ini defaults, extract new versions of files
		gosub, WriteIniDefaults
		gosub, ExtractFiles
		; sometimes people manually update by overwriting the exe at the
		; canonical path. if that happens, none of the below is necessary
		if(A_ScriptFullPath != WOTWREXE) {
			; but if they don't, we have to clean up. 
			; copy this file into the canonical path
			FileCopy, %A_ScriptFullPath%, %WOTWREXE%, 1
			; spawn a new thread running from the canonical path
			Run *RunAs %WOTWREXE% %1% %2% %3% %4%
			; mark this version of the file for deletion, then exit
			FileDelete, %DELETEME%
			FileAppend, %A_ScriptFullPath%, %DELETEME%			
			ExitApp
		}
	} else if(FileExist(DELETEME)) {
		; this branch triggers right after a successful update 
		; and deletes the update-source exe
		FileRead, TPath, %DELETEME%
		FileDelete, %TPath%
		FileDelete, %DELETEME%
	}
	FileDelete, %INSTALL_DIR%.VERSION
} else {
	; installation code
	Msgbox 4, Ori WOTW Randomizer Installer, Ready to install the WOTW Randomizer into %INSTALL_DIR% ?
	IfMsgBox No
	{
		Msgbox Exiting without installing
		ExitApp
	}
	gosub, WriteIniDefaults
	winStoreOri:=ComObjCreate("WScript.Shell").Exec("powershell -command  foreach ($app in get-AppxPackage) { if($app.Name -eq 'Microsoft.Patagonia') { echo yes } } ").StdOut.ReadAll()
	if(InStr(winStoreOri, "yes")) {
		Msgbox 4, Ori WOTW Randomizer Installer, Windows Store version of WotW found. `nInstall Wotw Rando for windows store?
		IfMsgBox Yes
		{
			WinStore := "true"
			IniWrite, %WinStore%, %INI_FILE%, Flags, UseWinStore
		} else {
			GoSub, CheckSteamPath
		}
	} else {
		GoSub, CheckSteamPath
	}

	SplashTextOn,,,Installing, please wait...
	gosub, ExtractFiles
	if(A_IsCompiled) {
		FileInstall, redis\VC_redist.x64.exe, %VCR_FILE%, 1
		; install the vs c++ redistributable
		RunWait, *RunAs %VCR_FILE% /install /quiet /norestart
		FileDelete, %VCR_FILE%		
	}
	; set filetype assocation
	FileDelete, %INSTALL_DIR%associateFileTypes.bat
	FileAppend, %batch%, %INSTALL_DIR%associateFileTypes.bat
	Run, *RunAs "%INSTALL_DIR%associateFileTypes.bat",
	SplashTextOff
	FileDelete, %INSTALL_DIR%.VERSION

	Msgbox 4, Ori WOTW Randomizer Installer, Installation complete! Launch Game Now?
	IfMsgBox No
	{
		Msgbox Exiting without launching game
		ExitApp
	}
}
gosub, ReadIniVals

if(dev == "false")
	maybehide := "Hide"

; ---------- check for updates ---------------
if(skipUpdate == "false")
{
	SplashTextOn,,,Checking for updates...
	Try {
		whr := ComObjCreate("WinHttp.WinHttpRequest.5.1")
		whr.Open("GET", "https://api.github.com/repos/sparkle-preference/OriWotwRandomizerClient/releases/latest", false)
		whr.Send() ; first

		RegExMatch(whr.ResponseText, "O)""tag_name"":""([^"",]*)""",tag)
		tag := tag.1

		RegExMatch(whr.ResponseText, "O)""body"":""([^"",]*)""",ReleaseNotes)
		ReleaseNotes := ReleaseNotes.1
		ReleaseNotes := StrReplace(ReleaseNotes, "\r\n", "`r`n")

		RegExMatch(whr.ResponseText, "O)""size"":([^"",]*).*""size"":([^"",]*)",DLsize) ; Please don't look at this. I needed the second match okay...
		DLsize := DLsize.2
		OutputDebug, %DLsize%

		SplashTextOn,,,Checking release %tag%

		whr.Open("GET", "https://github.com/sparkle-preference/OriWotwRandomizerClient/releases/download/" . tag . "/VERSION" , false)
		whr.Send() ; second

		latest := whr.ResponseText
		if(!semver_validate(MY_VER) Or (semver_validate(latest) and  semver_compare(latest, MY_VER) == 1)) 
		{
			SplashTextOff
			Msgbox 4, Ori WOTW Rando v%MY_VER%, Update to new Version %latest%? `n`n %ReleaseNotes%
			IfMsgBox, Yes 
			{
				message = 0x1100
				Progress, M h80 w500, , .
				OnMessage(message, "SetCounter")
				Download("https://github.com/sparkle-preference/OriWotwRandomizerClient/releases/download/"  tag  "/WotwRando.exe", NEWWOTWR, DLsize, message, 50)
				Progress, Off
				SplashTextOn,,,, Update Complete! Restarting...
				Sleep, 2000
				SplashTextOff
				Run, *RunAs %NEWWOTWR% %1% %2% %3% %4%
				ExitApp
			} 
		}
	}  catch e {
		errorMsg := "Error: " e.Message
	    msgbox Update check failed! Press ok to launch anyways`n%errorMsg%
	}
	SplashTextOff
}

argc = %0%
if(argc > 0)  {
	; if a seedfile was provided as an argument (presumably by doubleclicking),
	; load it in and launch/highlight the game
	FileDelete, %INSTALL_DIR%\.currentseedname
	SplitPath, 1, FileName
	FileAppend, %FileName%, %INSTALL_DIR%\.currentseedname
	FileCopy, %1%, %INSTALL_DIR%\.currentseed, 1
	IfWinNotExist, OriAndTheWilloftheWisps
	{
		SplashTextOn,400,, Launching Rando with Seed %FileName%
		GoSub, LaunchGame
		WinWaitActive, OriAndTheWilloftheWisps,, 5
		Sleep 3000
		SplashTextOff
	} else {
		WinActivate, OriAndTheWilloftheWisps
		WinWaitActive, OriAndTheWilloftheWisps
		SendRaw, !l
	}

}  else {
	IfWinNotExist, OriAndTheWilloftheWisps 
	{
		SplashTextOn,400,, Launching Rando with current seed
		GoSub, LaunchGame
		WinWaitActive, OriAndTheWilloftheWisps,, 5
		Sleep 3000
		SplashTextOff
	} else {
		WinActivate, OriAndTheWilloftheWisps
		WinWaitActive, OriAndTheWilloftheWisps
		SendRaw, !l
	}
}
ExitApp

CheckSteamPath:
if(not FileExist(SteamPath)) {
		Msgbox 4, Ori WOTW Randomizer Installer, Error! Steam not found. `nLocate manually?
		IfMsgBox No
	{
		Msgbox Exiting; install incomplete
		ExitApp
	}
	FileSelectFile, SteamPath, 1, Steam.exe, Please Select Steam File, *.exe
	IniWrite, %SteamPath%, %INI_FILE%, Paths, Steam
}
return
LaunchGame:
if(WinStore == "false") 
	Run, *RunAs %SteamPath% -applaunch 1057090
else 
	Run, *RunAs shell:AppsFolder\Microsoft.Patagonia_8wekyb3d8bbwe!App

Run, *RunAs %INJECTOR% %dev% %WinStore%,,%maybehide%
return

ReadIniVals:
IniRead, SkipUpdate, %INI_FILE%, Flags, SkipUpdate, false
IniRead, SteamPath, %INI_FILE%, Paths, Steam, C:\Program Files (x86)\Steam\steam.exe
IniRead, Dev, %INI_FILE%, Flags, Dev, false
IniRead, MuteInjectLogs, %INI_FILE%, Flags, MuteInjectLogs, false
IniRead, MuteCSLogs, %INI_FILE%, Flags, MuteCSLogs, false
IniRead, ShowShortCutscenes, %INI_FILE%, Flags, ShowShortCutscenes, false
IniRead, ShowLongCutscenes, %INI_FILE%, Flags, ShowLongCutscenes, false
IniRead, WinStore, %INI_FILE%, Flags, UseWinStore, false
return

WriteIniDefaults:
gosub ReadIniVals ; populate the ini values to avoid overwriting
IniWrite, %SteamPath%, %INI_FILE%, Paths, Steam
IniWrite, %WinStore%, %INI_FILE%, Flags, UseWinStore
IniWrite, %SkipUpdate%, %INI_FILE%, Flags, SkipUpdate
IniWrite, %Dev%, %INI_FILE%, Flags, Dev
IniWrite, %MuteInjectLogs%, %INI_FILE%, Flags, MuteInjectLogs
IniWrite, %MuteCSLogs%, %INI_FILE%, Flags, MuteCSLogs
IniWrite, %ShowShortCutscenes%, %INI_FILE%, Flags, ShowShortCutscenes
IniWrite, %ShowLongCutscenes%, %INI_FILE%, Flags, ShowLongCutscenes
return

ExtractFiles:

FileInstall, C:\moon\RandoMainDLL.dll, %INSTALL_DIR%RandoMainDLL.dll, 1
FileInstall, C:\moon\InjectDLL.dll, %INSTALL_DIR%InjectDLL.dll, 1
FileInstall, C:\moon\Injector.exe, %INJECTOR%, 1
FileInstall, projects\SeedGen\loc_data.csv, %INSTALL_DIR%loc_data.csv, 1
FileInstall, projects\SeedGen\areas.wotw, %INSTALL_DIR%areas.wotw, 1
FileInstall, C:\moon\RandoSettings.exe, %INSTALL_DIR%RandoSettings.exe, 1
FileInstall, VERSION, %INSTALL_DIR%VERSION, 1
If(A_IsCompiled)
	FileCopy, %A_ScriptFullPath%, %WOTWREXE%
Else
	FileCopy C:\moon\WotwRando.exe, %WOTWREXE%
return


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




semver_validate(version)
{
	return !!RegExMatch(version, "^(\d+)\.(\d+)\.(\d+)(\-([0-9A-Za-z\-]+\.)*[0-9A-Za-z\-]+)?(\+([0-9A-Za-z\-]+\.)*[0-9A-Za-z\-]+)?$")
}
semver_parts(version, byRef out_major, byRef out_minor, byRef out_patch, byRef out_prerelease, byRef out_build)
{
	return !!RegExMatch(version, "^(?P<major>\d+)\.(?P<minor>\d+)\.(?P<patch>\d+)(\-(?P<prerelease>([0-9A-Za-z\-]+\.)*([0-9A-Za-z\-]+)))?(\+?(?P<build>([0-9A-Za-z\-]+\.)*([0-9A-Za-z\-]+)))?$", out_)
}
semver_compare(version1, version2)
{
	if (!semver_parts(version1, maj1, min1, pat1, pre1, bld1))
		throw Exception("Invalid version: " version1)
	if (!semver_parts(version2, maj2, min2, pat2, pre2, bld2))
		throw Exception("Invalid version: " version2)

	for each, part in ["maj", "min", "pat"]
	{
		%part%1 += 0, %part%2 += 0
		if (%part%1 < %part%2)
			return -1
		else if (%part%1 > %part%2)
			return +1
	}

	for each, part in ["pre", "bld"] ; { "pre" : 1, "bld" : -1 }
	{
		if (%part%1 && %part%2)
		{
			StringSplit part1_, %part%1, .
			StringSplit part2_, %part%2, .
			Loop % part1_0 < part2_0 ? part1_0 : part2_0 ; use the smaller amount of parts
			{
				if part1_%A_Index% is digit
				{
					if part2_%A_Index% is digit ; both are numeric: compare numerically
					{
						part1_%A_Index% += 0, part2_%A_Index% += 0
						if (part1_%A_Index% < part2_%A_Index%)
							return -1
						else if (part1_%A_Index% > part2_%A_Index%)
							return +1
						continue
					}
				}
				; at least one is non-numeric: compare by characters
				if (part1_%A_Index% < part2_%A_Index%)
					return -1
				else if (part1_%A_Index% > part2_%A_Index%)
					return +1
			}
			; all compared parts were equal - the longer one wins
			if (part1_0 < part2_0)
				return -1
			else if (part1_0 > part2_0)
				return +1
		}
		else if (!%part%1 && %part%2) ; only version2 has prerelease -> version1 is higher
			return (part == "pre") ? +1 : -1
		else if (!%part%2 && %part%1) ; only version1 has prerelease -> it is smaller
			return (part == "pre") ? -1 : +1
	}

	return 0
}