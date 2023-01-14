#include <Common/ext.h>

#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>

namespace {
    // Dont reactivate teleporters we have visited if we for some reason set teleporter uber states to false.
    bool overwrite_is_visited = false;
    IL2CPP_INTERCEPT(RuntimeGameWorldArea, bool, IsVisited_2, (app::RuntimeGameWorldArea * this_ptr, app::Vector3 position)) {
        if (overwrite_is_visited) {
            return false;
        }

        return next::RuntimeGameWorldArea::IsVisited_2(this_ptr, position);
    }

    std::unordered_map<std::pair<int, int>, core::api::uber_states::UberState, pair_hash> tps_by_position{
        { { -798, -4308 }, core::api::uber_states::UberState(21786, 10185) },
        { { -328, -4534 }, core::api::uber_states::UberState(11666, 61594) },
        { { -1308, -3672 }, core::api::uber_states::UberState(53632, 18181) },
        { { -944, -4580 }, core::api::uber_states::UberState(24922, 42531) },
        { { -150, -4236 }, core::api::uber_states::UberState(937, 26601) },
        { { -307, -4151 }, core::api::uber_states::UberState(42178, 42096) },
        { { -259, -3959 }, core::api::uber_states::UberState(28895, 54235) },
        { { 513, -4359 }, core::api::uber_states::UberState(18793, 38871) },
        { { -1316, -4151 }, core::api::uber_states::UberState(945, 58183) },
        { { -1656, -4168 }, core::api::uber_states::UberState(945, 1370) },
        { { 611, -4159 }, core::api::uber_states::UberState(58674, 7071) },
        { { 1082, -4050 }, core::api::uber_states::UberState(58674, 1965) },
        { { 1456, -3995 }, core::api::uber_states::UberState(58674, 10029) },
        { { 1992, -3900 }, core::api::uber_states::UberState(20120, 49994) },
        { { 2043, -3677 }, core::api::uber_states::UberState(20120, 41398) },
        { { 2130, -3982 }, core::api::uber_states::UberState(10289, 4928) },
        { { 421, -3862 }, core::api::uber_states::UberState(16155, 41465) },
        { { 554, -3605 }, core::api::uber_states::UberState(16155, 50867) },
    };

    core::api::uber_states::UberState should_overwrite_is_visited(UberStateGroup::RandoConfig, 1);
    IL2CPP_INTERCEPT(SavePedestalController, bool, IsTeleporterActiveAtMapPosition, (app::Vector2 position)) {
        modloader::ScopedSetter setter(overwrite_is_visited, should_overwrite_is_visited.get<bool>());
        auto ret = next::SavePedestalController::IsTeleporterActiveAtMapPosition(position);
        if (ret) {
            auto it = tps_by_position.find(std::make_pair(static_cast<int>(position.x), static_cast<int>(position.y)));
            if (it != tps_by_position.end()) {
                it->second.set<bool>(true);
            }
        }

        return ret;
    }
} // namespace
