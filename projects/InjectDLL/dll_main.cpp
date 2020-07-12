// dllmain.cpp : Defines the entry point for the DLL application.

#include <detours/detours.h>

#include <common.h>
#include <constants.h>
#include <dll_main.h>
#include <interception_macros.h>
#include <macros.h>
#include <il2cpp_helpers.h>
#include <pickups/ore.h>
#include <fixes/dash.h>
#include <features/invert_swim.h>
#include <features/mouse_control.h>

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

#include <dev/dev_commands.h>

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
std::mutex sound_mutex;

//---------------------------------------------------------Bindings------------------------------------------------------------

IL2CPP_BINDING(, GameController, bool, get_InputLocked, (app::GameController* thisPtr));
IL2CPP_BINDING(, GameController, bool, get_LockInput, (app::GameController* thisPtr));
IL2CPP_BINDING(, GameController, bool, get_IsSuspended, (app::GameController* thisPtr));
IL2CPP_BINDING(, GameController, bool, get_SecondaryMapAndInventoryCanBeOpened, (app::GameController* thisPtr));

IL2CPP_BINDING(, SpellInventory, void, UpdateBinding, (app::SpellInventory* thisPtr, int32_t binding, int32_t typ));

IL2CPP_BINDING(UnityEngine, Cursor, int32_t, get_lockState, ());
IL2CPP_BINDING(UnityEngine, Cursor, void, set_lockState, (int32_t value));

IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* thisPtr));
IL2CPP_BINDING(, SeinCharacter, void, set_Position, (app::SeinCharacter* thisPtr, app::Vector3 value));
IL2CPP_BINDING(, SpellInventory, app::InventoryItem*, AddNewSpellToInventory, (app::SpellInventory* thisPtr, int32_t type, bool adding));

//---------------------------------------------------------Intercepts----------------------------------------------------------

app::Vector3 last_position;
__int8 set_to_last_position = 0;

INJECT_C_DLLEXPORT void warp_to(int x, int y, __int8 frames) {
  last_position.x = x;
  last_position.y = y;
  set_to_last_position = frames;
}

INJECT_C_DLLEXPORT bool has_ability(uint8_t ability) {
  auto sein = get_sein();
  if (sein && sein->fields.PlayerAbilities)
    return PlayerAbilities::HasAbility(sein->fields.PlayerAbilities, ability);
  trace(MessageType::Error, 3, "abilities", "Failed to check ability: couldn't find reference to sein!");
  return false;
}

INJECT_C_DLLEXPORT void set_ability(uint8_t ability, bool value) {
  auto sein = get_sein();
  if (sein && sein->fields.PlayerAbilities)
    PlayerAbilities::SetAbility(sein->fields.PlayerAbilities, ability, value);
  else
    trace(MessageType::Error, 3, "abilities", "Failed to set ability: couldn't find reference to sein!");
}

INJECT_C_DLLEXPORT void set_equipment(int32_t equip, bool value) {
  auto sein = get_sein();
  if (sein && sein->fields.PlayerSpells)
    SpellInventory::AddNewSpellToInventory(sein->fields.PlayerSpells, equip, value);
  else
    trace(MessageType::Error, 3, "abilities", "Failed to set equipment: couldn't find reference to sein!");
}

IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
    GameController::FixedUpdate(this_ptr);
    on_fixed_update(this_ptr);
}

//---------------------------------------------------Actual Functions------------------------------------------------

INJECT_C_DLLEXPORT bool toggle_cursorlock() {
  int32_t newState = 2 - Cursor::get_lockState();
  Cursor::set_lockState(newState);
  return newState > 0;
}

app::GameController* get_game_controller() {
  return il2cpp::get_class<app::GameController__Class>("", "GameController")->static_fields->Instance;
}

app::SeinCharacter* get_sein() {
  return il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
}

app::UI__Class* get_ui() {
  return il2cpp::get_class<app::UI__Class>("Game", "UI");
}

app::GameSettings* get_settings() {
  return il2cpp::get_class<app::GameSettings__Class>("", "GameSettings")->static_fields->Instance;
}

INJECT_C_DLLEXPORT void bind_sword() {
  SpellInventory::UpdateBinding(get_sein()->fields.PlayerSpells, 0, 1002);
}
int frames_until_unmute = 0;
float old_sfx_volume = 0.0;
IL2CPP_BINDING(, GameSettings, float, get_SoundEffectsVolume, (app::GameSettings* this_ptr));
IL2CPP_BINDING(, GameSettings, void, set_SoundEffectsVolume, (app::GameSettings* this_ptr, float val));

void mute_for(int frames) {
  auto settings = get_settings();
  float current_volume = GameSettings::get_SoundEffectsVolume(settings);
  frames_until_unmute = frames;
  if (current_volume > 0.001) {
    sound_mutex.lock();
    old_sfx_volume = current_volume;
    GameSettings::set_SoundEffectsVolume(settings, 0.0);
    sound_mutex.unlock();
  }
}
void on_fixed_update(app::GameController* this_ptr) {
    try
    {
        csharp_bridge::update();
    }
    catch (int error)
    {
        trace(MessageType::Info, 3, "csharp_bridge", format("got error code $d", error));
    }

    if (frames_until_unmute > 0)
    {
        sound_mutex.lock();
        if (--frames_until_unmute == 0)
            GameSettings::set_SoundEffectsVolume(get_settings(), old_sfx_volume);

        sound_mutex.unlock();
    }
    if (set_to_last_position > 0)
    {
        set_to_last_position--;
        SeinCharacter::set_Position(get_sein(), last_position);
    }
}

INJECT_C_DLLEXPORT bool player_can_move()
{
  auto gcip = get_game_controller();
  return !(GameController::get_InputLocked(gcip) ||
      GameController::get_LockInput(gcip) ||
      GameController::get_IsSuspended(gcip)) &&
      GameController::get_SecondaryMapAndInventoryCanBeOpened(gcip);
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

void info(std::string const& group, std::string const& message) {
  trace(MessageType::Info, 4, group, message);
}
void warn(std::string const& group, std::string const& message) {
  trace(MessageType::Warning, 3, group, message);
}
void debug(std::string const& group, std::string const& message) {
  trace(MessageType::Debug, 5, group, message);
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
    {
      auto message = read_str_bw(walker);
      dev::handle_message(message);
      break;
    }
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

bool no_pause = false;
IL2CPP_INTERCEPT(, GameController, void, OnApplicationFocus, (app::GameController* this_ptr, bool focusStatus))
{
    this_ptr->fields._PreventFocusPause_k__BackingField = no_pause;
    GameController::OnApplicationFocus(this_ptr, focusStatus);
}

void set_no_pause(bool value)
{
  no_pause = value;
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

  dev::console_initialize();

  trace_enabled = csharp_bridge::check_ini("TraceEnabled");
  trace_pinging_enabled = !csharp_bridge::check_ini("TracePingingDisabled");
  set_mouse_controls();
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
  intercept::interception_init();

  dev::initialization_callbacks();
  set_no_pause(true);

  if (trace_enabled || csharp_bridge::check_ini("Dev"))
  {
    while (!shutdown_thread)
    {
      dev::console_poll();
      if (trace_enabled)
        network::poll_peer(network_data);
    }

    dev::console_free();
    if (trace_enabled)
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

extern "C" __declspec(dllexport)VOID NullExport(VOID) {}
