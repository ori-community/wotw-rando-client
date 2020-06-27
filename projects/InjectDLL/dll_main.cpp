// dllmain.cpp : Defines the entry point for the DLL application.

#include <detours/detours.h>

#include <common.h>
#include <constants.h>
#include <dll_main.h>
#include <interception_macros.h>
#include <macros.h>
#include <pickups/ore.h>
#include <fixes/dash.h>
#include <features/invert_swim.h>

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

#include <Common/csv.h>
#include <Common/ext.h>

#include <csharp_bridge.h>

#include <WinNetwork/binary_walker.h>
#include <WinNetwork/peer.h>

//---------------------------------------------------Globals-----------------------------------------------------

bool trace_enabled = false;
// if you are debugging and don't want the trace client to be dropped set this to false.
bool trace_pinging_enabled = true;
bool debug_enabled = true;
bool info_enabled = true;
bool error_enabled = true;
bool input_lock_callback = false;

network::NetworkData network_data;
int peer_id = -1;
std::mutex network_mutex;

std::string csv_path = "C:\\moon\\inject_log.csv";
bool write_to_csv = true;
bool flush_after_every_line = true;
std::ofstream csv_file;
std::mutex csv_mutex;

//---------------------------------------------------------Bindings------------------------------------------------------------

// GameController$get_InputLocked
BINDING(10012848, bool, getInputLocked, (GameController_o * thisPtr));
// GameController$$get_LockInput
BINDING(10013200, bool, getLockInput, (GameController_o * thisPtr));
// GameController$$get_IsSuspended
BINDING(10013520, bool, getIsSuspended, (GameController_o * thisPtr));
// GameController$$get_SecondaryMapAndInventoryCanBeOpened
BINDING(10011696, bool, getSecondaryMenusAccessable, (GameController_o * thisPtr));

BINDING(11450304, void, SpellInventory__UpdateBinding, (SpellInventory_o * thisPtr, int32_t binding, int32_t typ));

BINDING(35034256, int32_t, UnityEngine_Cursor__get_lockState, ());
BINDING(35034336, void, UnityEngine_Cursor__set_lockState, (int32_t value));

BINDING(27776432, void, Moon_UberStateController__ApplyAll, (int32_t context));
BINDING(10971216, UnityEngine_Vector3_o, SeinCharacter__get_Position, (SeinCharacter_o * thisPtr));
BINDING(10971312, void, SeinCharacter__set_Position, (SeinCharacter_o * thisPtr, UnityEngine_Vector3_o value));
BINDING(11448960, Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_o*, SpellInventory__AddNewSpellToInventory, (SpellInventory_o * thisPtr, int32_t type, bool adding));

BINDING(8332848, int, getSaveSlot, ()); //SaveSlotsManager$$get_CurrentSlotIndex
BINDING(8333136, int, getBackupSlot, ()); //SaveSlotsManager$$get_BackupIndex

//---------------------------------------------------------Intercepts----------------------------------------------------------

INTERCEPT(10056256, void, GameController__CreateCheckpoint, (GameController_o * thisPtr, bool doPerformSave, bool respectRestrictCheckpointZone)) {
    csharp_bridge::on_checkpoint();
    GameController__CreateCheckpoint(thisPtr, doPerformSave, respectRestrictCheckpointZone);
}

INTERCEPT(6709008, void, newGamePerform, (__int64 thisPtr, __int64 ctxPtr)) {
    //NewGameAction$$Perform
    csharp_bridge::new_game(getSaveSlot());
	newGamePerform(thisPtr, ctxPtr);
}

INTERCEPT(8237360, void, SaveGameController__SaveToFile, (SaveGameController_o* thisPtr, int32_t slotIndex, int32_t backupIndex, System_Byte_array* bytes)) {
    csharp_bridge::on_save(slotIndex, backupIndex);
    SaveGameController__SaveToFile(thisPtr, slotIndex, backupIndex, bytes);
}

INTERCEPT(8297856, void, SaveSlotBackupsManager__PerformBackup, (SaveSlotBackupsManager_o* thisPtr, SaveSlotBackup_o* saveSlot, int32_t backupIndex, System_String_o* backupName)) {
    csharp_bridge::on_save(saveSlot->Index, backupIndex);
    SaveSlotBackupsManager__PerformBackup(thisPtr, saveSlot, backupIndex, backupName);
}

INTERCEPT(8252224, void, SaveGameController__OnFinishedLoading, (SaveGameController_o* thisPtr)) {
    csharp_bridge::on_load(getSaveSlot(), getBackupSlot());
    SaveGameController__OnFinishedLoading(thisPtr);
}

INTERCEPT(8249872, void, SaveGameController__RestoreCheckpoint, (SaveGameController_o* thisPtr)) {
    csharp_bridge::on_load(getSaveSlot(), getBackupSlot());
    SaveGameController__RestoreCheckpoint(thisPtr);
}

INTERCEPT(18324032, void, SeinHealthController__OnRespawn, (SeinHealthController_o* thisPtr)) {
    csharp_bridge::on_load(getSaveSlot(), getBackupSlot());
    SeinHealthController__OnRespawn(thisPtr);
}

UnityEngine_Vector3_o last_position;
__int8 set_to_last_position = 0;

INJECT_C_DLLEXPORT void magic_function() {
    last_position = SeinCharacter__get_Position(get_sein());
    set_to_last_position = 3;
    Moon_UberStateController__ApplyAll(1);
}

INJECT_C_DLLEXPORT bool has_ability(uint8_t ability) {
    auto sein = get_sein();
    if(sein && sein->PlayerAbilities)
        return PlayerAbilities__HasAbility(sein->PlayerAbilities, ability);
    trace(MessageType::Error, 3, "abilities", "Failed to check ability: couldn't find reference to sein!");
    return false;
}

INJECT_C_DLLEXPORT void set_ability(uint8_t ability,  bool value) {
    auto sein = get_sein();
    if (sein && sein->PlayerAbilities) 
        PlayerAbilities__SetAbility(sein->PlayerAbilities, ability, value);
    else
        trace(MessageType::Error, 3, "abilities", "Failed to set ability: couldn't find reference to sein!");
}

INJECT_C_DLLEXPORT void set_equipment(int32_t equip, bool value) {
  auto sein = get_sein();
  if (sein && sein->PlayerSpells)
        SpellInventory__AddNewSpellToInventory(sein->PlayerSpells, equip, value);
  else
      trace(MessageType::Error, 3, "abilities", "Failed to set equipment: couldn't find reference to sein!");
}

INTERCEPT(10044704, void, fixedUpdate1, (__int64 thisPtr)) {
	//GameController$$FixedUpdate
	fixedUpdate1(thisPtr);
	on_fixed_update(thisPtr);
}

//---------------------------------------------------Actual Functions------------------------------------------------

INJECT_C_DLLEXPORT bool toggle_cursorlock() {
  int32_t newState = 2 - UnityEngine_Cursor__get_lockState();
  UnityEngine_Cursor__set_lockState(newState);
  return newState > 0;
}

STATIC_CLASS(71425184, Game_Characters_c*, g_characters);
STATIC_CLASS(71838776, GameController_c*, g_game_controller);
STATIC_CLASS(71714856, Game_UI_c*, g_ui);

GameController_o* get_game_controller_instance()
{
  return g_game_controller->static_fields->Instance;
}

SeinCharacter_o* get_sein()
{
    return g_characters->static_fields->m_sein;
}

INJECT_C_DLLEXPORT void bind_sword() {
    SpellInventory__UpdateBinding(get_sein()->PlayerSpells, 0, 1002);
}

void on_fixed_update(__int64 thisPointer){
	try
    {
        csharp_bridge::update();
	}
    catch(int error)
	{
        trace(MessageType::Info, 3, "csharp_bridge", format("got error code $d", error));
	}

    if (set_to_last_position > 0) {
        set_to_last_position--;
        SeinCharacter__set_Position(get_sein(), last_position);
    }
}

INJECT_C_DLLEXPORT void set_ore(int oreCount)
{
    SeinLevel__set_Ore(get_sein()->Level, oreCount);
}

INJECT_C_DLLEXPORT bool player_can_move()
{
    auto gcip = get_game_controller_instance();
    return !(getInputLocked(gcip) || getLockInput(gcip) || getIsSuspended(gcip)) && getSecondaryMenusAccessable(gcip);
}

INJECT_C_DLLEXPORT void save()
{
    trace(MessageType::Info, 3, "csharp_interop", "Save requested by c# code");
    GameController__CreateCheckpoint(get_game_controller_instance(), true, false);
}

//--------------------------------------------------------------Old-----------------------------------------------------------

void initialize_trace_file()
{
    if (!write_to_csv)
        return;

    csv_file.open(csv_path);
    write_to_csv = csv_file.is_open();
}

void write_trace(MessageType type, int level, std::string const& group, std::string const& message)
{
    if (!write_to_csv)
        return;

    if (!debug_enabled && type == MessageType::Debug)
        return;

    if (!info_enabled && type == MessageType::Info)
        return;

    std::string sanitized_group = csv::sanitize_csv_field(group);
    std::string sanitized_message = csv::sanitize_csv_field(message);

    std::string line = format(
        "%d, [%s], %d, %s,",
        type,
        sanitized_group.c_str(),
        level,
        sanitized_message.c_str()
    );

    csv_mutex.lock();
    if (flush_after_every_line)
        csv_file << line << std::endl;
    else
        csv_file << line << "\n";
    csv_mutex.unlock();
}

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

void trace(MessageType type, int level, std::string const& group, std::string const& message)
{
    send_trace(type, level, group, message);
    write_trace(type, level, group, message);
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

extern bool bootstrap();

INJECT_C_DLLEXPORT void injection_entry()
{
    initialize_trace_file();

    trace(MessageType::Info, 5, "initialize", "init_start");
    if (!bootstrap())
    {
        trace(MessageType::Info, 5, "initialize", "Failed to bootstrap, shutting down");
        csv_file.close();
        shutdown_thread = true;
        FreeLibraryAndExitThread(GetModuleHandleA("InjectDLL.dll"), 0);
    }

    trace_enabled = csharp_bridge::check_ini("TraceEnabled");
    trace_pinging_enabled = !csharp_bridge::check_ini("TracePingingDisabled");
    if (trace_enabled)
    {
        network_data.is_server = false;
        network_data.ip = "localhost";
        network_data.port = 27666;
        network_data.logging_callback = [](std::string const& str) { trace(MessageType::Info, 4, "network", str); };
        network_data.event_handler = &network_event_handler;

        network::initialize_peer(network_data);
        network::start_peer(network_data);
    }

    // We should probably get rid of these?
    debug_enabled = csharp_bridge::inject_debug_enabled();
    info_enabled = csharp_bridge::inject_log_enabled();

    // TODO: Change these for a call to check_ini.
    trace(MessageType::Info, 5, "initialize", format("debug: %d log: %d", debug_enabled, info_enabled));
    //LOG("debug: " << debug_enabled << " log: " << info_enabled);
    trace(MessageType::Info, 5, "initialize", "c# init complete");
    interception_init();

    if (trace_enabled)
    {
        while (!shutdown_thread)
            network::poll_peer(network_data);

        network::shutdown_peer(network_data);
    }

    if (write_to_csv)
        csv_file.close();
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
