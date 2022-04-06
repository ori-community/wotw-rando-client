#include <interop/csharp_bridge.h>
#include <macros.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/interception_macros.h>


namespace
{
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
}
