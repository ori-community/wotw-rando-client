#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DayThreeTreeSetupController.h>
#include <Modloader/app/structs/DayThreeTreeSetupController_State__Enum.h>
#include <Modloader/app/structs/TextureAnimation.h>

namespace app::classes::DayThreeTreeSetupController {
    IL2CPP_REGISTER_METHOD(0x00DD4D90, void, Start, (app::DayThreeTreeSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD4E30, void, FixedUpdate, (app::DayThreeTreeSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD4E40, void, UpdateState, (app::DayThreeTreeSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD5310, void, ChangeState, (app::DayThreeTreeSetupController * this_ptr, app::DayThreeTreeSetupController_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00DD5820, void, OnJumpAnimationEnd, (app::DayThreeTreeSetupController * this_ptr, app::TextureAnimation* texture_animation))
    IL2CPP_REGISTER_METHODINFO(0x047652E8, DayThreeTreeSetupController_OnJumpAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DD5A40, void, NaruBranchJumpOnAnimationEnd, (app::DayThreeTreeSetupController * this_ptr, app::TextureAnimation* texture_animation))
    IL2CPP_REGISTER_METHODINFO(0x047067C8, DayThreeTreeSetupController_NaruBranchJumpOnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DD5BE0, void, NaruClimbTrigger, (app::DayThreeTreeSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD6020, void, OnNaruClimbAnimationFinished, (app::DayThreeTreeSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731F80, DayThreeTreeSetupController_OnNaruClimbAnimationFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DayThreeTreeSetupController * this_ptr))
} // namespace app::classes::DayThreeTreeSetupController
