#include "pch.h"
// dllmain.cpp : Defines the entry point for the DLL application.

#pragma comment(lib, "detours.lib")

#include <detours/detours.h>

#include <pe_module.h>
#include <common.h>
#include <dll_main.h>
#include <interception_macros.h>
#include <pickups/ore.h>
#include <fixes/dash.h>

#include <string>
#include <functional>
#include <iostream>
#include <unordered_map>
#include <set>
#include <fstream>
#include <utility>
#include <chrono>
#include <ctime>

//---------------------------------------------------Globals-----------------------------------------------------
void* gameControllerInstancePointer = NULL;

bool debug_enabled = false;
bool info_enabled = true;
bool error_enabled = true;
bool input_lock_callback = false;

InjectDLL::PEModule* CSharpLib = NULL;

std::string logFilePath = "C:\\moon\\inject_log.txt"; // change this if you need to
std::ofstream logfile;

#define DEBUG(message) \
    if (debug_enabled) { \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time()  << "] (DEBUG): " << message << std::endl; \
	    logfile.close(); \
    }

#define LOG(message) \
    if (info_enabled) { \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time() << "] (INFO): " << message << std::endl; \
	    logfile.close(); \
    }

#define ERR(message) \
    if (error_enabled) { \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time() << "] (ERROR): " << message << std::endl; \
	    logfile.close(); \
    }

//---------------------------------------------------------Intercepts----------------------------------------------------------

INTERCEPT(10056256, void, createCheckpoint, (__int64 this_ptr), {
    CSharpLib->call<void>("OnCheckpoint");
    createCheckpoint(this_ptr);
});
//GameController$$createCheckpoint

BINDING(4091744, __int64, getAreaFromId, (__int64, unsigned __int8)) //GameWorld$$GetArea
BINDING(4084240, __int64, getRuntimeArea, (__int64, __int64)) //GameWorld$$FindRuntimeArea
BINDING(12643712, void, discoverAllAreas, (__int64)) //RuntimeGameWorldArea$$DiscoverAllAreas

__int64 gameWorldInstance = 0;

bool foundGameWorld() {
    return gameWorldInstance != 0;
}

BINDING(27776432, void, Moon_UberStateController__ApplyAll, (int32_t context));
BINDING(10971216, UnityEngine_Vector3_o, SeinCharacter__get_Position, (SeinCharacter_o* thisPtr));
BINDING(10971312, void, SeinCharacter__set_Position, (SeinCharacter_o* thisPtr, UnityEngine_Vector3_o value));


UnityEngine_Vector3_o lastPos;
__int8 setToLastPos = 0;

extern "C" __declspec(dllexport)
void magicFunction() {
    lastPos = SeinCharacter__get_Position(get_sein());
    setToLastPos = 3;
    Moon_UberStateController__ApplyAll(1);
}

INTERCEPT(4084560, void, GameWorld__Awake, (__int64 thisPtr), {
	if(gameWorldInstance != thisPtr) {
		debug("Found GameWorld instance!");
		gameWorldInstance = thisPtr;
	}
	GameWorld__Awake(thisPtr);
});
INTERCEPT(10044704, void, fixedUpdate1, (__int64 thisPtr), {
	//GameController$$FixedUpdate
	fixedUpdate1(thisPtr);
	onFixedUpdate(thisPtr);
});
BINDING(8332848, int, getSaveSlot, ()); //SaveSlotsManager$$get_CurrentSlotIndex
BINDING(8333136, int, getBackupSlot, ()); //SaveSlotsManager$$get_BackupIndex
INTERCEPT(6709008, void, newGamePerform, (__int64 thisPtr, __int64 ctxPtr), {
	//NewGameAction$$Perform
	CSharpLib->call<void, int>("NewGame", getSaveSlot());
	newGamePerform(thisPtr, ctxPtr);
});



INTERCEPT(8237360, void, SaveGameController__SaveToFile, (SaveGameController_o* thisPtr, int32_t slotIndex, int32_t backupIndex, System_Byte_array* bytes), {
	CSharpLib->call<void, int, int>("OnSave", slotIndex, backupIndex);
    SaveGameController__SaveToFile(thisPtr, slotIndex, -1, bytes);
});

INTERCEPT(8297856, void, SaveSlotBackupsManager__PerformBackup, (SaveSlotBackupsManager_o* thisPtr, SaveSlotBackup_o* saveSlot, int32_t backupIndex, System_String_o* backupName), {
    CSharpLib->call<void, int, int>("OnSave", saveSlot->Index, backupIndex);
    SaveSlotBackupsManager__PerformBackup(thisPtr, saveSlot, backupIndex, backupName);
})

INTERCEPT(8252224, void, SaveGameController__OnFinishedLoading, (SaveGameController_o* thisPtr), {
	CSharpLib->call<void, int, int>("OnLoad", getSaveSlot(), getBackupSlot());
    SaveGameController__OnFinishedLoading(thisPtr);
});

INTERCEPT(8249872, void, SaveGameController__RestoreCheckpoint, (SaveGameController_o* thisPtr), {
    CSharpLib->call<void, int, int>("OnLoad", getSaveSlot(), getBackupSlot());
    SaveGameController__RestoreCheckpoint(thisPtr);
});



// GameController$get_InputLocked
BINDING(10012848, bool, getInputLocked, (__int64));
// GameController$$get_LockInput
BINDING(10013200, bool, getLockInput, (__int64));
// GameController$$get_IsSuspended
BINDING(10013520, bool, getIsSuspended, (__int64));
// GameController$$get_SecondaryMapAndInventoryCanBeOpened
BINDING(10011696, bool, getSecondaryMenusAccessable, (__int64));

//---------------------------------------------------Actual Functions------------------------------------------------

Game_Characters_StaticFields* get_characters(){
	return (*(Game_Characters_c**) resolve_rva(71425184))->static_fields;
}
SeinCharacter_o* get_sein(){
    return (*(Game_Characters_c**)resolve_rva(71425184))->static_fields->m_sein;
}
BINDING(11450304, void, SpellInventory__UpdateBinding, (SpellInventory_o* thisPtr, int32_t binding, int32_t typ));

extern "C" __declspec(dllexport)
void bindSword() {
    SpellInventory__UpdateBinding(get_sein()->PlayerSpells, 0, 1002);
}

void onFixedUpdate(__int64 thisPointer){
	if(gameControllerInstancePointer != (void*) thisPointer) {
		DEBUG("got GameController.Instance pointer: " << thisPointer);
		gameControllerInstancePointer = (void*) thisPointer;
	}
	try {
		CSharpLib->call<int>("Update");
	} catch(int error)
	{
		LOG("got error code " << error);
	}
    if (setToLastPos > 0) {
        setToLastPos--;
        SeinCharacter__set_Position(get_sein(), lastPos);
    }
}

extern "C" __declspec(dllexport)
void setOre(int oreCount) {
    SeinLevel__set_Ore(get_sein()->Level, oreCount);
}

extern "C" __declspec(dllexport)
bool playerCanMove() {
    if (gameControllerInstancePointer == NULL)
        return false; // can't move if the game controller doesn't exist
    // TODO: figure out which of these are superflous
    __int64 gcip = (__int64)gameControllerInstancePointer;
    DEBUG("gIL: " << getInputLocked(gcip) << ", gLI: " << getLockInput(gcip) << ", gIS: " << getIsSuspended(gcip) << ", gSMA: " << getSecondaryMenusAccessable(gcip));
    return !(getInputLocked(gcip) || getLockInput(gcip) || getIsSuspended(gcip)) && getSecondaryMenusAccessable(gcip);
}


extern "C" __declspec(dllexport)
void save() {
    if (gameControllerInstancePointer == NULL) {
        LOG("no pointer to game controller: can't save!");
        return;        
    }
    DEBUG("Checkpoint requested by c# code");
    createCheckpoint((__int64)gameControllerInstancePointer);
}

extern "C" __declspec(dllexport)
bool discoverEverything(){
	if(gameWorldInstance)
	{
        for(unsigned __int8 i = 0; i <= 15; i++)
		{
			auto area = getAreaFromId(gameWorldInstance, i);
			if(!area)
			{
				//Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
				continue;
			}
			auto runtimeArea = getRuntimeArea(gameWorldInstance, area);
			if(!runtimeArea)
			{
				continue;
			}
			discoverAllAreas(runtimeArea);
		}
        DEBUG("Map revealed");
        return true;
    } else {
		log("Tried to discover all, but haven't found the GameWorld Instance yet :(");
        return false;
	}
}

//--------------------------------------------------------------Old-----------------------------------------------------------

void log(std::string message){
	LOG(message);
}
void error(std::string message){
	ERR(message);
}
void debug(std::string message){
	DEBUG(message);
}

bool attached = false;
bool shutdown = false;

void MainThread(){
	log("loading c# dll...");
	CSharpLib = new InjectDLL::PEModule(_T("C:\\moon\\RandoMainDLL.dll"));
	if(CSharpLib->call<bool>("Initialize"))
	{
		debug_enabled = CSharpLib->call<bool>("InjectDebugEnabled");
		info_enabled = CSharpLib->call<bool>("InjectLogEnabled");
		LOG("debug: " << debug_enabled << " log: " << info_enabled);
		log("c# init complete");
		interception_init();
		return;
	} else
	{
		log("Failed to initialize, shutting down");
		shutdown = true;
		FreeLibraryAndExitThread(GetModuleHandleA("InjectDLL.dll"), 0);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved){
	if(DetourIsHelperProcess())
	{
		return TRUE;
	}
	switch(ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
			if(!attached) {
				debug("init start");
				CreateThread(0, 0, (LPTHREAD_START_ROUTINE) MainThread, 0, 0, 0);
				attached = true;
			}
			break;
		case DLL_PROCESS_DETACH:
			shutdown = true;
			delete CSharpLib;
			DetourTransactionBegin();
			DetourUpdateThread(GetCurrentThread());
			interception_detach();

			log("detatch commit: " + std::to_string(DetourTransactionCommit()));
			break;
		default:
			break;
	}
	return TRUE;
}


// strftime format
#define LOGGER_PRETTY_TIME_FORMAT "%Y-%m-%d %H:%M:%S"

// printf format
#define LOGGER_PRETTY_MS_FORMAT ".%03d"


// convert current time to milliseconds since unix epoch
template <typename T>
static int to_ms(const std::chrono::time_point<T>& tp){
	using namespace std::chrono;

	auto dur = tp.time_since_epoch();
	return static_cast<int>(duration_cast<milliseconds>(dur).count());
}

// format it in two parts: main part with date and time and part with milliseconds
#pragma warning(disable:4267)
static std::string pretty_time(){
	auto tp = std::chrono::system_clock::now();
	std::time_t current_time = std::chrono::system_clock::to_time_t(tp);

	std::tm time_info;
	localtime_s(&time_info, &current_time);

	char buffer[128];

	int string_size = strftime(
		buffer, sizeof(buffer),
		LOGGER_PRETTY_TIME_FORMAT,
		&time_info
		);

	int ms = to_ms(tp) % 1000;

	string_size += std::snprintf(
		buffer + string_size, sizeof(buffer) - string_size,
		LOGGER_PRETTY_MS_FORMAT, ms
		);

	return std::string(buffer, buffer + string_size);
}
#pragma warning(default:4267)

extern "C" __declspec(dllexport)VOID NullExport(VOID){}
