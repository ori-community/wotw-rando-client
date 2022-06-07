#include <interop/csharp_bridge.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/RuntimeGameWorldArea.h>
#include <Il2CppModLoader/app/methods/SavePedestalController.h>

namespace {
    // Dont reactivate teleporters we have visited if we for some reason set teleporter uber states to false.
    bool overwrite_is_visited = false;
    IL2CPP_INTERCEPT(RuntimeGameWorldArea, bool, IsVisited_2, (app::RuntimeGameWorldArea * this_ptr, app::Vector3 position)) {
        if (overwrite_is_visited)
            return false;

        return next::RuntimeGameWorldArea::IsVisited_2(this_ptr, position);
    }

    uber_states::UberState should_overwrite_is_visited(UberStateGroup::RandoConfig, 1);
    IL2CPP_INTERCEPT(SavePedestalController, bool, IsTeleporterActiveAtMapPosition, (app::Vector2 position)) {
        overwrite_is_visited = should_overwrite_is_visited.get<bool>();
        auto ret = next::SavePedestalController::IsTeleporterActiveAtMapPosition(position);
        if (ret)
            csharp_bridge::on_map_tp_active(position.x, position.y);

        overwrite_is_visited = false;
        return ret;
    }
} // namespace
