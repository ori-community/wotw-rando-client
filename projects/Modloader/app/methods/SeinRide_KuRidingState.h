#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinRide_KuRidingState {
    IL2CPP_REGISTER_METHOD(0x005D45D0, app::KuController*, get_KuController, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D4670, app::Ku*, get_Ku, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D4700, app::SeinCharacter*, get_Sein, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D4790, app::List_1_EquipmentType_*, get_AllowedEquipment, ())
    IL2CPP_REGISTER_METHOD(0x005D4990, void, OnBegin, (app::SeinRide_KuRidingState * this_ptr, app::IRideable* rideable, bool skip_mount_animation))
    IL2CPP_REGISTER_METHOD(0x005D5010, void, OnMatchAnimationStopped, (app::SeinRide_KuRidingState * this_ptr, app::MoonAnimation* ori_animation, app::ActiveAnimationHandle source_active_animation))
    IL2CPP_REGISTER_METHODINFO(0x04727580, SeinRide_KuRidingState_OnMatchAnimationStopped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D5290, void, OnMatchAnimationTrigered, (app::SeinRide_KuRidingState * this_ptr, app::MoonAnimation* ori_animation, app::ActiveAnimationHandle source_active_animation, int32_t priority, app::Func_1_Boolean_* source_continue_condition))
    IL2CPP_REGISTER_METHODINFO(0x04708BE0, SeinRide_KuRidingState_OnMatchAnimationTrigered__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D56A0, void, OnEnd, (app::SeinRide_KuRidingState * this_ptr, app::IRideable* rideable))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnJump, (app::SeinRide_KuRidingState * this_ptr, float y_speed))
    IL2CPP_REGISTER_METHOD(0x005D5920, void, EnterMounting, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D5E50, void, UpdateMounting, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D62B0, void, Update, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_MatchRotation, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6880, bool, get_LockPlayerToAttachmentPoint, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6890, void, _EnterMounting_b__26_0, (app::SeinRide_KuRidingState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F468, SeinRide_KuRidingState__EnterMounting_b__26_0__MethodInfo)
} // namespace app::classes::SeinRide_KuRidingState
