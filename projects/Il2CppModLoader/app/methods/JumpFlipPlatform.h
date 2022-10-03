#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::JumpFlipPlatform {
    IL2CPP_REGISTER_METHOD(0x00E4A210, void, OnValidate, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4A2B0, void, Awake, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4A860, void, OnDestroy, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4ADE0, void, FixedUpdate, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4AFA0, void, Start, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4B070, void, Toggle, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4B090, void, UpdateState, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4BB80, void, OnPlayerWallJump, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771420, JumpFlipPlatform_OnPlayerWallJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4BC20, void, OnPlayerDoubleJump, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A568, JumpFlipPlatform_OnPlayerDoubleJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4BCC0, void, OnPlayerJump, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712830, JumpFlipPlatform_OnPlayerJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4BD60, void, OnPlayerChargeJump, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748C18, JumpFlipPlatform_OnPlayerChargeJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E4BD90, void, Serialize, (app::JumpFlipPlatform * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, (app::JumpFlipPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0070DEC0, app::SuspendableMask__Enum, get_Mask, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4BDE0, void, set_Mask, (app::JumpFlipPlatform * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00E4BEA0, void, ctor, (app::JumpFlipPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E4C0E0, void, cctor, ())
} // namespace app::classes::JumpFlipPlatform
