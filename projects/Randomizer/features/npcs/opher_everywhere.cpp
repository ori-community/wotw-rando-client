#include <Modloader/app/methods/WeaponMasterPlaceholder.h>
#include <Modloader/interception_macros.h>

#include <Core/enums/uber_state.h>
#include <Core/api/uber_states/uber_state.h>


namespace {
    const auto SPAWN_OPHER = core::api::uber_states::UberState(UberStateGroup::RandoState, 301);
    const auto USE_SPAWN_OPHER_RANDO_STATE = core::api::uber_states::UberState(UberStateGroup::RandoConfig, 31);

    IL2CPP_INTERCEPT(bool, WeaponMasterPlaceholder, ShouldSpawn, app::WeaponMasterPlaceholder* this_ptr) {
        if (!USE_SPAWN_OPHER_RANDO_STATE.get<bool>()) {
            return next::WeaponMasterPlaceholder::ShouldSpawn(this_ptr);
        }

        return SPAWN_OPHER.get<bool>();
    }
} // namespace
