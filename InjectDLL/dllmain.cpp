#include "pch.h"
// dllmain.cpp : Defines the entry point for the DLL application.

#pragma comment(lib, "detours.lib")

#include "detours.h"
#include "PEModule.h"
#include "common.h"
#include "dllmain.h"

#include <string>
#include <functional>
#include <iostream>
#include <unordered_map>
#include <set>
#include <fstream>
#include <utility>
#include <chrono>
#include <ctime>

#include "interceptionMacros.h"
#include "src/pickups/oreInterception.h"
#include "src/fixes/dashFixes.h"

//---------------------------------------------------Globals-----------------------------------------------------
char foundTree = -1;
char priorFoundTree = -1;
bool foundTreeFulfilled = false;

__int64 lastDesiredState = NULL;
__int64 priorDesiredState = NULL;
void* gameControllerInstancePointer = NULL;

bool debug_enabled = false;
bool info_enabled = true;
bool error_enabled = true;
bool input_lock_callback = false;
const std::set<char> treeAbilities{0, 5, 8, 23, 51, 57, 62, 77, 97, 100, 101, 102, 104, 121};

bool isTree(char tree){
	return treeAbilities.find(tree) != treeAbilities.end();
}

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

BINDING(0x4A2380, void, createCheckpoint, (__int64))
//GameController$$createCheckpoint
;
BINDING(0x75EBB0, __int64, getAreaFromId, (__int64, unsigned __int8)) //GameWorld$$GetArea
BINDING(0x75CE60, __int64, getRuntimeArea, (__int64, __int64)) //GameWorld$$FindRuntimeArea
BINDING(9829632, void, discoverAllAreas, (__int64)) //RuntimeGameWorldArea$$DiscoverAllAreas

__int64 gameWorldInstance = 0;

bool foundGameWorld() {
    return gameWorldInstance != 0;
}

BINDING(27709360, void, Moon_UberStateController__ApplyAll, (int32_t context))

extern "C" __declspec(dllexport)
void magicFunction() { Moon_UberStateController__ApplyAll(1); }

INTERCEPT(7720864, void, GameWorld__Awake, (__int64 thisPtr), {
	if(gameWorldInstance != thisPtr) {
		debug("Found GameWorld instance!");
		gameWorldInstance = thisPtr;
	}
	GameWorld__Awake(thisPtr);
});


INTERCEPT(0xFC4D50, bool, sub180FC4D50, (__int64 mappingPtr, __int64 uberState), {
	//RVA: 13A7AA0. Called from PlayerStateMap.Mapping::Matches
	// TODO: it's unclear how exactly we should fix this
	bool result = sub180FC4D50(mappingPtr, uberState);
	if(isTree(foundTree))
		result = CSharpLib->call<bool, BYTE>("DoInvertTree", foundTree) ^ result;
	return result;
		  });


// stop complaining about LOCK not having enough parameters
#pragma warning(disable: 4003)


INTERCEPT(14547728, void, getAbilityOnConditionFixedUpdate, (__int64 thisPtr), {
	//GetAbilityOnCondition$$FixedUpdate
	getAbilityOnConditionFixedUpdate(thisPtr);
// BAD PROBLEMS DESERVE BAD SOLUTIONS
if(lastDesiredState != *(__int64*) (thisPtr + 0x18)) {
		if(lastDesiredState != NULL && priorDesiredState != *(__int64*) (thisPtr + 0x18)) {
			priorDesiredState = *(__int64*) (thisPtr + 0x18);
			BYTE* desiredAbility = (BYTE*) (priorDesiredState + 0x18);
			priorFoundTree = *desiredAbility;
			DEBUG("GAOC.FU: got " << priorDesiredState << " for address 2 of condition (1 was " << lastDesiredState << "), wants " << (int) *desiredAbility);
		} else {
			lastDesiredState = *(__int64*) (thisPtr + 0x18);
			BYTE* desiredAbility = (BYTE*) (lastDesiredState + 0x18);
			foundTree = *desiredAbility;
			//				  auto condPtr = *(__int64*)(thisPtr + 0x20);
			//				  BYTE* condAbility = (BYTE*)(condPtr + 0x18);
			DEBUG("GAOC.FU: got " << lastDesiredState << " for address of condition, wants " << (int) *desiredAbility);
			//				  LOG("DesiredState ability " << (int)*desiredAbility);
		}
}

		  });

INTERCEPT(14548016, void, getAbilityOnConditionAssign, (__int64 thisPtr), {
	//GetAbilityOnCondition$$AssignAbility
	DEBUG("GAOC.ASS: intercepted and ignored ");
	if(isTree(foundTree))
		CSharpLib->call<void>("OnTree", foundTree);
		  });

INTERCEPT(16532768, bool, abilityStateFulfilled, (__int64 thisPtr, __int64 contextPtr), {
	//Moon.uberSerializationWisp.DesiredPlayerAbilityState$$IsFulfilled
	if(lastDesiredState == thisPtr && isTree(foundTree))
		return CSharpLib->call<bool>("TreeFulfilled", foundTree);
	else if(priorDesiredState == thisPtr && isTree(priorFoundTree))
		return CSharpLib->call<bool>("TreeFulfilled", priorFoundTree);
	else
		return abilityStateFulfilled(thisPtr, contextPtr);
		  });

INTERCEPT(4850384, void, fixedUpdate1, (__int64 thisPointer), {
	//GameController$$FixedUpdate
	fixedUpdate1(thisPointer);
	onFixedUpdate(thisPointer);
		  });
BINDING(5743408, int, getSaveSlot, ())//SaveSlotsManager$$get_CurrentSlotIndex
INTERCEPT(6674272, void, newGamePerform, (__int64 thisPtr, __int64 ctxPtr), {
	//NewGameAction$$Perform
	CSharpLib->call<void, int>("NewGame", getSaveSlot());
	newGamePerform(thisPtr, ctxPtr);
		  });



INTERCEPT(5648192, void, saveToFile, (__int64 thisPtr, __int64 slotIndex, __int64 backupIndex, __int64 bytesPtr), {
	//SaveGameController$$SaveToFile
	CSharpLib->call<void, __int64>("OnSave", slotIndex);
	saveToFile(thisPtr, slotIndex, backupIndex, bytesPtr);
		  });

INTERCEPT(5663040, void, onFinishedLoading, (__int64 thisPtr), {
	//SaveGameController$$OnFinishedLoading
	CSharpLib->call<void, int>("OnLoad", getSaveSlot());
	onFinishedLoading(thisPtr);
		  });

INTERCEPT(5660688, void, restoreCheckpoint, (__int64 thisPtr, __int64 actionPtr), {
	//SaveGameController$$RestoreCheckpoint
	CSharpLib->call<void, int>("OnLoad", getSaveSlot());
	restoreCheckpoint(thisPtr, actionPtr);
		  });



// GameController::get_InputLocked
BINDING(0x499890, bool, getInputLocked, (__int64));
// GameController::get_LockInput
BINDING(0x4999F0, bool, getLockInput, (__int64));
// GameControler::get_IsSuspended
BINDING(0x499B40, bool, getIsSuspended, (__int64));
// GameControler::get_SecondaryMapAndInventoryCanBeOpened
BINDING(0x499400, bool, getSecondaryMenusAccessable, (__int64));

//---------------------------------------------------Actual Functions------------------------------------------------

Game_Characters_StaticFields* get_characters(){
	return (*(Game_Characters_c**) resolve_rva(71033680))->static_fields;
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
}

extern "C" __declspec(dllexport)
void setOre(int oreCount) {
    SeinLevel__set_Ore(get_characters()->m_sein->Level, oreCount);
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
void foundDash() {
    hasRealDash = true;
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
