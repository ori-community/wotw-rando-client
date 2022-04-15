#include <macros.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

INJECT_C_DLLEXPORT void save();
INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load);

namespace
{
    enum class TeleportState
    {
        None,
        Teleport,
        PostTeleport,
        Hang
    };

    const app::Vector3 ORIGINAL_START = { -798.797058f, -4310.119141f, 0.f };
    bool overwrite_start = false;
    app::Vector3 start_position = { 1992.240112f, -3902.245361f, 0.f };

    TeleportState teleport_state = TeleportState::None;
    app::Vector3 teleport_position;
    app::Vector3 hang_pos;
    bool handling_start = false;
    int cutscene_skips = 0;
    int ignore_count = 0;
    int load_hang_count = 0;
    IL2CPP_BINDING(, ScenesManager, void, LoadScenesAtPosition,
        (app::ScenesManager* this_ptr, app::Vector3 position, bool async, bool loadingZones, bool keepPreloaded, bool forceLoad, bool loadDependantScenes));
    IL2CPP_BINDING(, SkipCutsceneController, void, SkipCutscene, (app::SkipCutsceneController* this_ptr));
    IL2CPP_BINDING(, SkipCutsceneController, void, SkipPrologue, (app::SkipCutsceneController* this_ptr));
    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* this_ptr));
    IL2CPP_INTERCEPT(, SeinCharacter, void, set_Position, (app::SeinCharacter* this_ptr, app::Vector3 value)) {
        if (ignore_count > 0)
            --ignore_count;
        else
            SeinCharacter::set_Position(this_ptr, value);
    }

    IL2CPP_BINDING(, GameplayCamera, void, MoveCameraToTargetInstantly, (app::GameplayCamera* this_ptr, bool updateTargetPosition));
    IL2CPP_INTERCEPT(, SeinCharacter, void, FixedUpdate, (app::SeinCharacter* this_ptr)) {
        // Don't teleport during cutscene skips, causes crashes.
        if (teleport_state == TeleportState::Teleport && cutscene_skips == 0)
        {
            SeinCharacter::set_Position(this_ptr, teleport_position);
            teleport_state = TeleportState::PostTeleport;
        }
        else if (teleport_state == TeleportState::PostTeleport)
        {
            auto* const cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
            if (cameras != nullptr && cameras->static_fields->Current != nullptr)
            {
                // We need to do this on the next frame to allow state to update without causing flickering.
                auto* const camera = cameras->static_fields->Current;
                GameplayCamera::MoveCameraToTargetInstantly(camera, true);
            }
            else
                modloader::warn("teleport", "failed to refocus camera");

            if(handling_start)
            {
                save();
                handling_start = false;
                hang_pos = SeinCharacter::get_Position(this_ptr);
                teleport_state = TeleportState::Hang;
                load_hang_count = 60;
            }
            else {
                teleport_state = TeleportState::None;
            }
        }
        else if (teleport_state == TeleportState::Hang) {
            SeinCharacter::set_Position(this_ptr, hang_pos);
            if (--load_hang_count <= 0) {
                teleport_state = TeleportState::None;
            }
        }

        if (cutscene_skips > 0)
        {
            auto* const controller = il2cpp::get_class<app::SkipCutsceneController__Class>("", "SkipCutsceneController")->static_fields->Instance;
            SkipCutsceneController::SkipCutscene(controller);
            --cutscene_skips;
        }

        SeinCharacter::FixedUpdate(this_ptr);
    }
    
    uber_states::UberState intro_cutscene(static_cast<UberStateGroup>(21786), 48748);
    IL2CPP_INTERCEPT(, GameStateMachine, void, SetToPrologue, (app::GameStateMachine* this_ptr)) {
        GameStateMachine::SetToPrologue(this_ptr);
        handling_start = true;
        auto* const controller = il2cpp::get_class<app::SkipCutsceneController__Class>("", "SkipCutsceneController")->static_fields->Instance;
        SkipCutsceneController::SkipPrologue(controller);
        intro_cutscene.set(1);
        if (overwrite_start)
            teleport(start_position.x, start_position.y, true);
        else
            teleport(ORIGINAL_START.x, ORIGINAL_START.y, false); // This is already preloaded at this point.

        // I hate this but required for nice looking transition here.
        game::player::set_ability(app::AbilityType__Enum_SpiritMagnet, false);
        cutscene_skips += 2;
    }

    IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateAreaMapInformation, void, SetAreaState,
        (app::PlayerUberStateAreaMapInformation* this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3 position)) {
        if (handling_start && state == app::WorldMapAreaState__Enum_Visited)
            state = app::WorldMapAreaState__Enum_Discovered;

        PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
    }

    // Dont cancel loads during teleportation.
    IL2CPP_INTERCEPT(, ScenesManager, bool , CancelScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene)) {
        if (teleport_state != TeleportState::Teleport)
            return ScenesManager::CancelScene(this_ptr, scene);
    
        return false;
    }
}

INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load)
{
    teleport_position = { x, y, 0.f };
    teleport_state = TeleportState::Teleport;
    auto manager = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes")->static_fields->Manager;
    ScenesManager::LoadScenesAtPosition(manager, teleport_position, !wait_for_load, false, true, false, false);
}

INJECT_C_DLLEXPORT void set_start_position(float x, float y)
{
    start_position = { x, y, 0.f };
    overwrite_start = true;
}

INJECT_C_DLLEXPORT void clear_start_position()
{
    overwrite_start = false;
}
