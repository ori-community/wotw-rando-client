#include "Il2CppModLoader/common.h"
#include "Il2CppModLoader/interception_macros.h"
#include "Il2CppModLoader/app/methods/PetrifiedOwlBossEntity.h"
#include "uber_states/uber_state_interface.h"

namespace {
    IL2CPP_INTERCEPT(PetrifiedOwlBossEntity, void, OnDeathBehaviourEntered, (app::PetrifiedOwlBossEntity* this_ptr)) {
        uber_states::UberState game_finished_state(34543, 11226);
        game_finished_state.set(1.0);

        next::PetrifiedOwlBossEntity::OnDeathBehaviourEntered(this_ptr);
    }
}