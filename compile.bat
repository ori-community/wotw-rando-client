:: change these if necessary
set MSBuildPath="C:\Program Files (x86)\Microsoft Visual Studio\2019\Preview\MSBuild\Current\Bin\MsBuild.exe"
cd "%~dp0"

copy ".\VERSION" "C:\moon\VERSION" /Y

if "%1"=="compileonly" (
	copy ".\projects\SeedGenCli\loc_data.csv" "C:\moon\loc_data.csv" /Y
	copy ".\projects\SeedGenCli\state_data.csv" "C:\moon\state_data.csv" /Y
	copy ".\projects\SeedGenCli\areas.wotw" "C:\moon\areas.wotw" /Y
	".\ext\ahk\Ahk2Exe.exe" /in ".\RandoSettings.ahk" /icon ".\WotwRando.ico" /out "C:\moon\RandoSettings.exe"
	echo built RandoSettings.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\projects/AutoTracker/OriAutoTracker.ahk" /icon ".\WotwRando.ico" /out "C:\moon\ItemTracker.exe"
	echo built ItemTracker.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\WotwRando.ahk" /icon ".\WotwRando.ico" /out "C:\moon\WotwRando.exe"
	echo built WotwRando.exe
	echo AHK compile complete!
	timeout /t 3
	exit 0
)
cd "%~dp0"

if NOT "%1"=="buildonly" (
	cd ".\projects\SeedGenCli"
	echo building rust seedgen :D
	call compile.bat
	copy ".\target\release\seedgen.exe" "C:\moon\seedgen.exe"
	if "%1"=="release" (
		"C:\Program Files\7-Zip\7z.exe" a -tzip C:\moon\headers_presets.zip headers presets
		echo updated headers_presets.zip
	)
)
cd "%~dp0"

:: Either change paths or build yourself and run with nobuild
if NOT "%1"=="nobuild" (
	%MSBuildPath% -targets -p:Configuration=RelWithDebInfo -p:Platform=x64 C:\Users\WorstMirari\Documents\GitHub\OriWotwRandomizerClient\build\win64\WotWRandomizer.sln
	IF ERRORLEVEL 1 (
		echo BUILD FAILED
		timeout /t 14
		exit 1
	)
)

cd "%~dp0"
copy ".\projects\SeedGenCli\loc_data.csv" "C:\moon\loc_data.csv" /Y
copy ".\projects\SeedGenCli\state_data.csv" "C:\moon\state_data.csv" /Y
copy ".\projects\SeedGenCli\areas.wotw" "C:\moon\areas.wotw" /Y



if NOT "%1"=="buildonly" (
	".\ext\ahk\Ahk2Exe.exe" /in ".\RandoSettings.ahk" /icon ".\WotwRando.ico" /out "C:\moon\RandoSettings.exe"
	echo built RandoSettings.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\projects/AutoTracker/OriAutoTracker.ahk" /icon ".\WotwRando.ico" /out "C:\moon\ItemTracker.exe"
	echo built ItemTracker.exe
	".\ext\ahk\Ahk2Exe.exe" /in ".\WotwRando.ahk" /icon ".\WotwRando.ico" /out "C:\moon\WotwRando.exe"
	echo built WotwRando.exe

	echo BUILD SUCCESS!
	if "%1"=="release" (
		"C:\Program Files\7-Zip\7z.exe" a -tzip C:\moon\pdbs\pdbs.zip  C:\moon\InjectDLL.pdb C:\moon\RandoMainDLL.pdb C:\moon\Il2CppModLoader.pdb C:\moon\Common.pdb
		echo wrote pdbs to C:\moon\pdbs\pdbs.zip
	)
)

