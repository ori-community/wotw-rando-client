; WotwRando.exe
; Installer / patcher / launcher for the ori and the will of the wisps randomizer
#NoEnv 							; don't populate environment variables automatically
SetWorkingDir, %A_ScriptDir%	; start where we at

; --- uncomment lines below to rebuild testing ver
; Run, "C:\Users\WorstMirari\Documents\GitHub\OriWotwRandomizerClient\WotwRando.ahk" %1%
; exitapp  

; filecreatedir silent fails if it exists, so
FileCreateDir %INSTALL_DIR%

batch=
(
assoc .wotwr=WotwRando
ftype WotwRando="%INSTALL_DIR%WotwRando.exe" "`%`%1" `%`%*
)


If(not FileExist(INSTALL_DIR . "\WotwRando.exe")) {
	; installation code
	Msgbox 4, Ori WOTW Randomizer Installer, Press Yes to install the WOTW Randomizer into %INSTALL_DIR%

	IfMsgBox No
	{
		Msgbox Exiting without installing
		ExitApp
	}
	FileInstall, C:\moon\AutoHotkey.Interop.dll, %INSTALL_DIR%AutoHotkey.Interop.dll
	FileInstall, C:\moon\RandoMainDLL.dll, %INSTALL_DIR%RandoMainDLL.dll
	FileInstall, C:\moon\InjectDLL.dll, %INSTALL_DIR%InjectDLL.dll
	FileInstall, C:\moon\Injector.exe, %INSTALL_DIR%Injector.exe
	FileInstall, C:\moon\VC_redist.x64.exe, %INSTALL_DIR%VC_redist.x64.exe
	FileInstall, VERSION, %INSTALL_DIR%VERSION
	If(A_IsCompiled)
		FileCopy, %A_ScriptFullPath%, %INSTALL_DIR%WotwRando.exe
	Else
		FileCopy C:\moon\WotwRando.exe, %INSTALL_DIR%WotwRando.exe

	; install the vs c++ redistributable
	RunWait, *RunAs %INSTALL_DIR%VC_redist.x64.exe /install /quiet /norestart
	; set filetype assocation
	FileDelete, %INSTALL_DIR%associateFileTypes.bat
	FileAppend, %batch%, %INSTALL_DIR%associateFileTypes.bat
	Run, *RunAs cmd.exe "%INSTALL_DIR%associateFileTypes.bat",

	Msgbox 4, Ori WOTW Randomizer Installer, Installation complete! Launch Game Now?
	FileCreateDir %INSTALL_DIR%
	IfMsgBox No
	{
		Msgbox Exiting without launching game
		ExitApp
	}

}
; -----------run C:\moon version of self, if that's not us (and we're compiled), and then Exit

If(A_ScriptFullPath != INSTALL_DIR . "WotwRando.exe" ) {
	if(A_IsCompiled)
	{
		Run *RunAs %INSTALL_DIR%WotwRando.exe
		ExitApp
	}
}

; ---------- check for updates ---------------

whr := ComObjCreate("WinHttp.WinHttpRequest.5.1")
whr.Open("GET", "https://api.github.com/repos/sparkle-preference/OriWotwRandomizerClient/releases/latest", false)
whr.Send()

RegExMatch(whr.ResponseText, "O)""tag_name"":""([^"",]*)""",tag)
tag := tag.1
whr.Open("GET", "https://github.com/sparkle-preference/OriWotwRandomizerClient/releases/download/" . tag . "/VERSION" , false)
whr.Send()

latest := whr.ResponseText
FileRead, MY_VER, %INSTALL_DIR%VERSION


if(!semver_validate(MY_VER) Or (semver_validate(latest) and  semver_compare(latest, MY_VER) == 1)) 
{
	Msgbox 4, Ori WOTW Rando v%MY_VER%, Update to new Version %latest%?
	IfMsgBox, Yes 
	{
		FileDelete, INSTALL_DIR . "\WotwRando.exe"
		message = 0x1100
		Progress, M h80 w500, , .
		OnMessage(message, "SetCounter")
		Download("https://github.com/sparkle-preference/OriWotwRandomizerClient/releases/download/" . tag . "/WotwRando.exe", INSTALL_DIR . "\WotwRando.exe", message, 50)
		FileDelete, %INSTALL_DIR%VERSION
		FileAppend, %latest%, %INSTALL_DIR%VERSION
		Progress, Off
		SplashTextOn,,, Update Complete! Restarting...
		Sleep, 2000
		SplashTextOff
		if(A_IsCompiled)
		{
			Run, %INSTALL_DIR%WotwRando.exe
			ExitApp
		}
	} 
}
argc = %0%
if(argc > 0)  {
	FileDelete, %INSTALL_DIR%\.currentseedname
	SplitPath, 1, FileName
	FileAppend, %FileName%, %INSTALL_DIR%\.currentseedname
	FileCopy, %1%, %INSTALL_DIR%\.currentseed, 1
	IfWinNotExist, OriAndTheWilloftheWisps
	{
		Run, *RunAs %INSTALL_DIR%\Injector.exe,,Hide
		SplashTextOn,,, Launching Rando with Seed %FileName%
		WinWaitActive, OriAndTheWilloftheWisps,, 5
		Sleep 1500
		SplashTextOff
	} else {
		WinActivate, OriAndTheWilloftheWisps
		WinWaitActive, OriAndTheWilloftheWisps
		SendInput, !l
	}

}  else {
	IfWinNotExist, OriAndTheWilloftheWisps 
	{
		SplashTextOn,,, Launching Rando with current seed
		Run, *RunAs %INSTALL_DIR%\Injector.exe,,Hide
		WinWaitActive, OriAndTheWilloftheWisps,, 5
		Sleep 1500
		SplashTextOff
	} else {
		WinActivate, OriAndTheWilloftheWisps
		WinWaitActive, OriAndTheWilloftheWisps
		SendInput, !l
	}
}
ExitApp

SetCounter(wParam, lParam) {
	global url
	progress := Round(wParam / lParam * 100)
	wParam := (wParam // 1024) // 1024
	lParam := (lParam // 1024) // 1024
	Progress, %progress%, %url%, Downloading %wParam%MB of about %lParam%MB..., %progress%`% - Downloading...
}

Download(url, save, msg = 0x1100, sleep = 250) {
	SetTimer, _dlprocess, %sleep%
	UrlDownloadToFile, %url%, %save%
	SetTimer, _dlprocess, Off
	Return, ErrorLevel
	_dlprocess:
	FileGetSize, current, %save%, K
	Process, Exist
	PostMessage, msg, current * 1024, 46 * 1024 * 1024, , ahk_pid %ErrorLevel%
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