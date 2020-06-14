#include "pch.h"
// dllmain.cpp : Defines the entry point for the DLL application.

#include <detours/detours.h>

#include <pe_module.h>
#include <common.h>
#include <constants.h>
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

#include <mutex>

#include <WinNetwork/binary_walker.h>
#include <WinNetwork/peer.h>
#include <WinNetwork/ext.h>

//---------------------------------------------------Globals-----------------------------------------------------
void* game_controller_instance_ptr = NULL;

bool trace_enabled = false;
// if you are debugging and don't want the trace client to be dropped set this to false.
bool trace_pinging_enabled = true;
bool debug_enabled = true;
bool info_enabled = true;
bool error_enabled = true;
bool input_lock_callback = false;

InjectDLL::PEModule* csharp_lib = NULL;
network::NetworkData network_data;
int peer_id = -1;
std::mutex network_mutex;

std::string logFilePath = "C:\\moon\\inject_log.txt"; // change this if you need to
std::ofstream logfile;
std::mutex log_mutex;

#define DEBUG(message) \
    if (debug_enabled) { \
        log_mutex.lock(); \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time()  << "] (DEBUG): " << message << std::endl; \
	    logfile.close(); \
        log_mutex.unlock(); \
    }

#define LOG(message) \
    if (info_enabled) { \
        log_mutex.lock(); \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time() << "] (INFO): " << message << std::endl; \
	    logfile.close(); \
        log_mutex.unlock(); \
    }

#define ERR(message) \
    if (error_enabled) { \
        log_mutex.lock(); \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time() << "] (ERROR): " << message << std::endl; \
	    logfile.close(); \
        log_mutex.unlock(); \
    }

//---------------------------------------------------------Intercepts----------------------------------------------------------

INTERCEPT(10056256, void, createCheckpoint, (__int64 this_ptr), {
    csharp_lib->call<void>("OnCheckpoint");
    createCheckpoint(this_ptr);
});
//GameController$$createCheckpoint


BINDING(27776432, void, Moon_UberStateController__ApplyAll, (int32_t context));
BINDING(10971216, UnityEngine_Vector3_o, SeinCharacter__get_Position, (SeinCharacter_o* thisPtr));
BINDING(10971312, void, SeinCharacter__set_Position, (SeinCharacter_o* thisPtr, UnityEngine_Vector3_o value));

UnityEngine_Vector3_o last_position;
__int8 set_to_last_position = 0;

extern "C" __declspec(dllexport)
void magic_function() {
    last_position = SeinCharacter__get_Position(get_sein());
    set_to_last_position = 3;
    Moon_UberStateController__ApplyAll(1);
}

INTERCEPT(10044704, void, fixedUpdate1, (__int64 thisPtr), {
	//GameController$$FixedUpdate
	fixedUpdate1(thisPtr);
	on_fixed_update(thisPtr);
});

BINDING(8332848, int, getSaveSlot, ()); //SaveSlotsManager$$get_CurrentSlotIndex
BINDING(8333136, int, getBackupSlot, ()); //SaveSlotsManager$$get_BackupIndex

INTERCEPT(6709008, void, newGamePerform, (__int64 thisPtr, __int64 ctxPtr), {
	//NewGameAction$$Perform
	csharp_lib->call<void, int>("NewGame", getSaveSlot());
	newGamePerform(thisPtr, ctxPtr);
});

INTERCEPT(8237360, void, SaveGameController__SaveToFile, (SaveGameController_o* thisPtr, int32_t slotIndex, int32_t backupIndex, System_Byte_array* bytes), {
	csharp_lib->call<void, int, int>("OnSave", slotIndex, backupIndex);
    SaveGameController__SaveToFile(thisPtr, slotIndex, -1, bytes);
});

INTERCEPT(8297856, void, SaveSlotBackupsManager__PerformBackup, (SaveSlotBackupsManager_o* thisPtr, SaveSlotBackup_o* saveSlot, int32_t backupIndex, System_String_o* backupName), {
    csharp_lib->call<void, int, int>("OnSave", saveSlot->Index, backupIndex);
    SaveSlotBackupsManager__PerformBackup(thisPtr, saveSlot, backupIndex, backupName);
});

INTERCEPT(8252224, void, SaveGameController__OnFinishedLoading, (SaveGameController_o* thisPtr), {
    csharp_lib->call<void, int, int>("OnLoad", getSaveSlot(), getBackupSlot());
    SaveGameController__OnFinishedLoading(thisPtr);
});

INTERCEPT(8249872, void, SaveGameController__RestoreCheckpoint, (SaveGameController_o* thisPtr), {
    csharp_lib->call<void, int, int>("OnLoad", getSaveSlot(), getBackupSlot());
    SaveGameController__RestoreCheckpoint(thisPtr);
});

INTERCEPT(18324032, void, SeinHealthController__OnRespawn, (SeinHealthController_o* thisPtr), {
    csharp_lib->call<void, int, int>("OnLoad", getSaveSlot(), getBackupSlot());
    SeinHealthController__OnRespawn(thisPtr);
});

// GameController$get_InputLocked
BINDING(10012848, bool, getInputLocked, (__int64));
// GameController$$get_LockInput
BINDING(10013200, bool, getLockInput, (__int64));
// GameController$$get_IsSuspended
BINDING(10013520, bool, getIsSuspended, (__int64));
// GameController$$get_SecondaryMapAndInventoryCanBeOpened
BINDING(10011696, bool, getSecondaryMenusAccessable, (__int64));

BINDING(11450304, void, SpellInventory__UpdateBinding, (SpellInventory_o* thisPtr, int32_t binding, int32_t typ));

BINDING(35034256, int32_t, UnityEngine_Cursor__get_lockState, ());
BINDING(35034336, void, UnityEngine_Cursor__set_lockState, (int32_t value));

//---------------------------------------------------Actual Functions------------------------------------------------
extern "C" __declspec(dllexport)
bool toggle_cursorlock() {
  int32_t newState = 2 - UnityEngine_Cursor__get_lockState();
  UnityEngine_Cursor__set_lockState(newState);
  return newState > 0;
}

Game_Characters_StaticFields* get_characters()
{
	return (*(Game_Characters_c**) resolve_rva(71425184))->static_fields;
}
Game_UI_c* get_UI() { 
  return (*(Game_UI_c**)resolve_rva(71714856));  // Class$Game.UI
} 
SeinCharacter_o* get_sein()
{
    return get_characters()->m_sein;
}

extern "C" __declspec(dllexport)
void bind_sword() {
    SpellInventory__UpdateBinding(get_sein()->PlayerSpells, 0, 1002);
}

void on_fixed_update(__int64 thisPointer){
	if(game_controller_instance_ptr != (void*) thisPointer) {
		DEBUG("got GameController.Instance pointer: " << thisPointer);
		game_controller_instance_ptr = (void*) thisPointer;
	}
	try {
		csharp_lib->call<int>("Update");
	} catch(int error)
	{
		LOG("got error code " << error);
	}
    if (set_to_last_position > 0) {
        set_to_last_position--;
        SeinCharacter__set_Position(get_sein(), last_position);
    }
}

extern "C" __declspec(dllexport)
void set_ore(int oreCount) {
    SeinLevel__set_Ore(get_sein()->Level, oreCount);
}

extern "C" __declspec(dllexport)
bool player_can_move() {
    if (game_controller_instance_ptr == NULL)
        return false; // can't move if the game controller doesn't exist

    // TODO: figure out which of these are superflous
    __int64 gcip = (__int64)game_controller_instance_ptr;
    DEBUG("gIL: " << getInputLocked(gcip) << ", gLI: " << getLockInput(gcip) << ", gIS: " << getIsSuspended(gcip) << ", gSMA: " << getSecondaryMenusAccessable(gcip));
    return !(getInputLocked(gcip) || getLockInput(gcip) || getIsSuspended(gcip)) && getSecondaryMenusAccessable(gcip);
}


extern "C" __declspec(dllexport)
void save() {
    if (game_controller_instance_ptr == NULL) {
        LOG("no pointer to game controller: can't save!");
        return;        
    }
    DEBUG("Checkpoint requested by c# code");
    createCheckpoint((__int64)game_controller_instance_ptr);
}


//--------------------------------------------------------------Old-----------------------------------------------------------

void send_trace(MessageType type, int level, std::string const& group, std::string const& message)
{
    // TODO: Maybe buffer these until we connect?
    if (peer_id < 0)
        return;

    using namespace network::binary;

    constexpr int BUFFER_SIZE = 512;
    char buffer[BUFFER_SIZE];

    BinaryWalker walker;
    walker.cursor = 0;
    walker.data = buffer;
    walker.size = BUFFER_SIZE;

    write_bw(walker, 0);
    write_bw(walker, network::PackageType::TraceMessage);
    write_bw(walker, type);
    write_bw(walker, level);
    write_str_bw(walker, group);
    write_str_bw(walker, message);
    auto size = walker.cursor;
    walker.cursor = 0;
    write_bw(walker, size - static_cast<int>(sizeof(int)));

    network_mutex.lock();
    network::send_data(network_data, peer_id, walker.data, size);
    network_mutex.unlock();
}

void log(std::string message)
{
    send_trace(MessageType::Info, 3, "test", message);
	LOG(message);
}

void error(std::string message)
{
    send_trace(MessageType::Error, 3, "test", message);
	ERR(message);
}

void debug(std::string message)
{
    send_trace(MessageType::Debug, 3, "test", message);
	DEBUG(message);
}

bool attached = false;
bool shutdown_thread = false;

void network_event_handler(network::NetworkEvent const& evt)
{
    using namespace network;
    using namespace network::binary;

    switch (evt.type)
    {
    case network::NetworkEventType::Package:
    {
        BinaryWalker walker;
        walker.cursor = 0;
        walker.data = evt.data;
        walker.size = evt.size;

        auto type = read_bw<PackageType>(walker);
        switch (type)
        {
        case network::PackageType::Message:
            // TODO: Do some fancy stuff here.
            LOG("----> " + read_str_bw(walker));
            break;
        default:
            break;
        }
        break;
    }
    case network::NetworkEventType::Connected:
    {
        peer_id = evt.peer_id;

        constexpr int BUFFER_SIZE = 64;
        char buffer[BUFFER_SIZE];
        BinaryWalker walker;
        walker.cursor = 0;
        walker.data = buffer;
        walker.size = BUFFER_SIZE;

        write_bw(walker, 0);
        write_bw(walker, PackageType::Identifier);
        write_str_bw(walker, "Randomizer");
        auto size = walker.cursor;
        walker.cursor = 0;
        write_bw(walker, size - static_cast<int>(sizeof(int)));

        network_mutex.lock();
        send_data(network_data, peer_id, walker.data, size);
        if (!trace_pinging_enabled)
            set_pinging(network_data, peer_id, false);

        network_mutex.unlock();
        break;
    }
    case network::NetworkEventType::Disconnected:
        peer_id = -1;
        break;
    default:
        break;
    }
}

void main_thread(){
    network_data.is_server = false;
    network_data.ip = "localhost";
    network_data.port = 27666;
    network_data.logging_callback = [](std::string const& str) { LOG(str); };
    network_data.event_handler = &network_event_handler;

	log("loading c# dll...");
	csharp_lib = new InjectDLL::PEModule(_T("C:\\moon\\RandoMainDLL.dll"));
	if(csharp_lib->call<bool>("Initialize"))
	{
        {
            constexpr char arg1[] = "TraceEnabled";
            trace_enabled = csharp_lib->call<bool>("CheckIni", arg1);

            constexpr char arg2[] = "TracePingingDisabled";
            trace_pinging_enabled = !csharp_lib->call<bool>("CheckIni", arg2);
        }

        if (trace_enabled)
        {
            network::initialize_peer(network_data);
            network::start_peer(network_data);
        }

		debug_enabled = csharp_lib->call<bool>("InjectDebugEnabled");
		info_enabled = csharp_lib->call<bool>("InjectLogEnabled");
		LOG("debug: " << debug_enabled << " log: " << info_enabled);
		log("c# init complete");
		interception_init();

        if (trace_enabled)
        {
            while (!shutdown_thread)
                network::poll_peer(network_data);

            network::shutdown_peer(network_data);
        }
	} else
    {
		log("Failed to initialize, shutting down");
        shutdown_thread = true;
        if (trace_enabled)
            network::shutdown_peer(network_data);

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
			if(!attached)
			{
				debug("init start");
				CreateThread(0, 0, (LPTHREAD_START_ROUTINE) main_thread, 0, 0, 0);
				attached = true;
			}
			break;
		case DLL_PROCESS_DETACH:
            network::shutdown_peer(network_data);
			shutdown_thread = true;
			delete csharp_lib;
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
static int to_ms(const std::chrono::time_point<T>& tp)
{
	using namespace std::chrono;

	auto dur = tp.time_since_epoch();
	return static_cast<int>(duration_cast<milliseconds>(dur).count());
}

// format it in two parts: main part with date and time and part with milliseconds
#pragma warning(disable:4267)
static std::string pretty_time()
{
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
