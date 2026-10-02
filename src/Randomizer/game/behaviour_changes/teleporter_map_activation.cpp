#include <Common/ext.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/uber_states/core_uber_states.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <unordered_map>


namespace {
    // Don't reactivate teleporters we have visited if we for some reason set teleporter uber states to false.
    bool overwrite_is_visited = false;
    IL2CPP_INTERCEPT(bool, RuntimeGameWorldArea, IsVisited_2, app::RuntimeGameWorldArea * this_ptr, app::Vector3 position) {
        if (overwrite_is_visited) {
            return false;
        }

        return next::RuntimeGameWorldArea::IsVisited_2(this_ptr, position);
    }

    std::unordered_map<std::pair<int, int>, core::api::uber_states::UberState<core::api::uber_states::UberStateType::SavePedestalUberState>, pair_hash> tps_by_position = {
        {{ -798, -4308 }, core::uber_states::state<"swampStateGroup", 10185>() },
        {{ -328, -4534 }, core::uber_states::state<"howlsDenGRoup", 61594>() },
        {{ -1308, -3672 }, core::uber_states::state<"wellspringGroupDescriptor", 18181>() },
        {{ -944, -4580 }, core::uber_states::state<"howlsOriginGroup", 42531>() },
        {{ -150, -4236 }, core::uber_states::state<"kwolokGroupDescriptor", 26601>() },
        {{ -307, -4151 }, core::uber_states::state<"hubUberStateGroup", 42096>() },
        {{ -259, -3959 }, core::uber_states::state<"baursReachGroup", 54235>() },
        {{ 513, -4359 }, core::uber_states::state<"mouldwoodDepthsGroup", 38871>() },
        {{ 611, -4159 }, core::uber_states::state<"_petrifiedForestGroup", 7071>() },
        {{ 1082, -4050 }, core::uber_states::state<"_petrifiedForestGroup", 1965>() },
        {{ 1456, -3995 }, core::uber_states::state<"_petrifiedForestGroup", 10029>() },
        {{ 1992, -3900 }, core::uber_states::state<"windsweptWastesGroupDescriptor", 49994>() },
        {{ 2043, -3677 }, core::uber_states::state<"windsweptWastesGroupDescriptor", 41398>() },
        {{ 2130, -3982 }, core::uber_states::state<"windtornRuinsGroup", 4928>() },
        {{ -1316, -4151 }, core::uber_states::state<"lagoonStateGroup", 58183>() },
        {{ -1656, -4168 }, core::uber_states::state<"lagoonStateGroup", 1370>() },
        {{ 421, -3862 }, core::uber_states::state<"willowsEndGroup", 41465>() },
        {{ 554, -3605 }, core::uber_states::state<"willowsEndGroup", 50867>() },
    };

    auto& prevent_map_reactivate_tps_state = randomizer::uber_states::state<"randoConfig", "preventMapReactivateTps">();
    IL2CPP_INTERCEPT(bool, SavePedestalController, IsTeleporterActiveAtMapPosition, app::Vector2 position) {
        modloader::ScopedSetter setter(overwrite_is_visited, prevent_map_reactivate_tps_state.get());
        const auto return_value = next::SavePedestalController::IsTeleporterActiveAtMapPosition(position);

        if (return_value) {
            const auto it = tps_by_position.find(std::make_pair(static_cast<int>(position.x), static_cast<int>(position.y)));
            if (it != tps_by_position.end() && !it->second.get()) {
                it->second.set<bool>(true);
            }
        }

        return return_value;
    }
} // namespace
