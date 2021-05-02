// dllmain.cpp : Defines the entry point for the DLL application.

#include <constants.h>
#include <dll_main.h>
#include <macros.h>
#include <pickups/ore.h>
#include <features/invert_swim.h>
#include <features/mouse_control.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <string>
#include <functional>
#include <iostream>
#include <unordered_map>
#include <set>
#include <fstream>
#include <utility>

#include <mutex>

#include <Common/csv.h>
#include <Common/ext.h>

#include <csharp_bridge.h>

using namespace modloader;

//---------------------------------------------------------Globals-------------------------------------------------------------

std::mutex sound_mutex;

//---------------------------------------------------------Bindings------------------------------------------------------------

IL2CPP_BINDING(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability));
IL2CPP_INTERCEPT(, PlayerAbilities, void, SetAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability, bool value)) {
    auto debug_values = il2cpp::get_class<app::DebugValues__Class>("Game", "DebugValues");
    auto old = debug_values->static_fields->IsBlindForestMode;
    debug_values->static_fields->IsBlindForestMode = true;
    SetAbility(this_ptr, ability, value);
    debug_values->static_fields->IsBlindForestMode = old;
}

IL2CPP_BINDING(, GameController, bool, get_InputLocked, (app::GameController* thisPtr));
IL2CPP_BINDING(, GameController, bool, get_LockInput, (app::GameController* thisPtr));
IL2CPP_BINDING(, GameController, bool, get_IsSuspended, (app::GameController* thisPtr));
IL2CPP_BINDING(, GameController, bool, get_SecondaryMapAndInventoryCanBeOpened, (app::GameController* thisPtr));

IL2CPP_BINDING_OVERLOAD(, SpellInventory, void, UpdateBinding, (app::SpellInventory* thisPtr, app::SpellInventory_Binding__Enum binding, app::EquipmentType__Enum typ), (SpellInventory.Binding, EquipmentType));

IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* thisPtr));
IL2CPP_BINDING(, SeinCharacter, void, set_Position, (app::SeinCharacter* thisPtr, app::Vector3 value));
IL2CPP_BINDING(, SpellInventory, app::InventoryItem*, AddNewSpellToInventory, (app::SpellInventory* thisPtr, int32_t type, bool adding));

//---------------------------------------------------------Intercepts----------------------------------------------------------

app::Vector3 last_position;
__int8 set_to_last_position = 0;

INJECT_C_DLLEXPORT void start_credits() {
    auto cred_cont = il2cpp::get_class<app::CreditsController__Class>("", "CreditsController")->static_fields->Instance;
    auto timeline = cred_cont->fields.CreditsTimeline;
    il2cpp::invoke_virtual(timeline, il2cpp::get_class("Moon.Timeline", "TimelineEntity"), "StartPlayback");
/*    auto timelineClass = il2cpp::get_class("Moon.Timeline", "TimelineEntity");
    il2cpp::invoke_virtual(timeline, timelineClass, "StartPlayback")*/;
}

INJECT_C_DLLEXPORT void warp_to(int x, int y, __int8 frames)
{
    last_position.x = x;
    last_position.y = y;
    set_to_last_position = frames;
}

INJECT_C_DLLEXPORT bool has_ability(app::AbilityType__Enum ability)
{
    auto sein = get_sein();
    if (sein && sein->fields.PlayerAbilities)
        return PlayerAbilities::HasAbility(sein->fields.PlayerAbilities, ability);

    trace(MessageType::Error, 3, "abilities", "Failed to check ability: couldn't find reference to sein!");
    return false;
}

INJECT_C_DLLEXPORT void set_ability(app::AbilityType__Enum ability, bool value)
{
    auto sein = get_sein();
    if (sein && sein->fields.PlayerAbilities)
        PlayerAbilities::SetAbility_intercept(sein->fields.PlayerAbilities, ability, value);
    else
        trace(MessageType::Error, 3, "abilities", "Failed to set ability: couldn't find reference to sein!");
}

INJECT_C_DLLEXPORT void set_equipment(int32_t equip, bool value)
{
    auto sein = get_sein();
    if (sein && sein->fields.PlayerSpells)
        SpellInventory::AddNewSpellToInventory(sein->fields.PlayerSpells, equip, value);
    else
        trace(MessageType::Error, 3, "abilities", "Failed to set equipment: couldn't find reference to sein!");
}

IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
{
    GameController::FixedUpdate(this_ptr);
    on_fixed_update(this_ptr);
}

//---------------------------------------------------Actual Functions------------------------------------------------

app::GameController* get_game_controller()
{
    return il2cpp::get_class<app::GameController__Class>("", "GameController")->static_fields->Instance;
}

app::SeinCharacter* get_sein()
{
    return il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
}

app::UI__Class* get_ui()
{
    return il2cpp::get_class<app::UI__Class>("Game", "UI");
}

app::GameSettings* get_settings()
{
    return il2cpp::get_class<app::GameSettings__Class>("", "GameSettings")->static_fields->Instance;
}

INJECT_C_DLLEXPORT void bind(int slot, int equip_type)
{
    app::SpellInventory_Binding__Enum;
    SpellInventory::UpdateBinding(get_sein()->fields.PlayerSpells, static_cast<app::SpellInventory_Binding__Enum>(slot), static_cast<app::EquipmentType__Enum>(equip_type));
}

int frames_until_unmute = 0;
float old_sfx_volume = 0.0;
IL2CPP_BINDING(, GameSettings, float, get_SoundEffectsVolume, (app::GameSettings* this_ptr));
IL2CPP_BINDING(, GameSettings, void, set_SoundEffectsVolume, (app::GameSettings* this_ptr, float val));

void mute_for(int frames)
{
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
IL2CPP_BINDING(UnityEngine, Behaviour, void, set_enabled, (app::Behaviour*, bool));

void on_fixed_update(app::GameController* this_ptr)
{
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
    auto simpleFPS = il2cpp::get_class<app::SimpleFPS__Class>("", "SimpleFPS")->static_fields->Instance;
    Behaviour::set_enabled((app::Behaviour*)simpleFPS, false);

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

void Initialize()
{
    set_mouse_controls();
    set_no_pause(true);
}

CALL_ON_INIT(Initialize);
