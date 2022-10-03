#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BabyWormAnimation {
    IL2CPP_REGISTER_METHOD(0x00F7FA90, void, SetTurnParameter, (app::BabyWormAnimation * this_ptr, float turn_parameter))
    IL2CPP_REGISTER_METHOD(0x00F7FBF0, void, PlaySpawnAnimation, (app::BabyWormAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F7FC00, void, PlayMoveAnimation, (app::BabyWormAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F7FC10, void, PlayAttackAnticipationAnimation, (app::BabyWormAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F7FC50, void, PlayDashAttackAnimation, (app::BabyWormAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F7FC60, void, PlayTimeline, (app::BabyWormAnimation * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00F7FD30, void, SetMoveAnimSpeed, (app::BabyWormAnimation * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00F7FE00, void, ctor, (app::BabyWormAnimation * this_ptr))
} // namespace app::classes::BabyWormAnimation
