#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VRCharacterController.h>

namespace app::classes::RootMotion::Demos::VRCharacterController {
    IL2CPP_REGISTER_METHOD(0x0204B390, void, Awake, (app::VRCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204B460, void, Update, (app::VRCharacterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204BF30, void, ctor, (app::VRCharacterController * this_ptr))
} // namespace app::classes::RootMotion::Demos::VRCharacterController
