#include <dll_main.h>
#include <macros.h>
#include <uber_states/uber_state_manager.h>
#include <csharp_bridge.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* thisPtr));
    STATIC_IL2CPP_INTERCEPT(, SavePedestalController, void, Activate, (app::String* identifier)) {
        auto test = il2cpp::convert_csstring(identifier);
        // Glades teleporter weirdness.
        if (test == "kwoloksCavernSaveRoomA")
        {
            auto position = SeinCharacter::get_Position(get_sein());
            if (position.x < -295 && position.x > -322 && position.y < -4130 && position.y > -4160)
            {
                // We are in glades TP, activate that one instead.
                uber_states::set_uber_state_value(42178, 42096, 3);
                if (uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, 0) > 0.5f)
                    return;
            }
        }

        SavePedestalController::Activate(identifier);
    }

    // Dont reactivate teleporters we have visited if we for some reason set teleporter uber states to false.
    bool overwrite_is_visited = false;
    IL2CPP_INTERCEPT_OVERLOAD(, RuntimeGameWorldArea, bool, IsVisited, (app::RuntimeGameWorldArea* this_ptr, app::Vector3 position), (UnityEngine:Vector3)) {
        if (overwrite_is_visited)
            return false;
        return RuntimeGameWorldArea::IsVisited(this_ptr, position);
    }

    STATIC_IL2CPP_INTERCEPT(, SavePedestalController, bool, IsTeleporterActiveAtMapPosition, (app::Vector2 position)) {
        overwrite_is_visited = uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, 1) > 0.5f;
        auto ret = SavePedestalController::IsTeleporterActiveAtMapPosition(position);
        if (ret) 
            csharp_bridge::on_map_tp_active(position.x, position.y);
        
        overwrite_is_visited = false;
        return ret;
    }

    STATIC_IL2CPP_INTERCEPT(, SavePedestalController, void, OnFinishedTeleportingStartAnimation, ()) {
        csharp_bridge::on_teleporting();
        SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
}
