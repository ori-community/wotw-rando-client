#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KuPlatformMovement {
    IL2CPP_REGISTER_METHOD(0x005C7620, app::Vector3, get_Position, (app::KuPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01245400, void, set_Position, (app::KuPlatformMovement * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01245540, void, OnAwake, (app::KuPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012455F0, void, OnDestroy, (app::KuPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012456A0, void, Apply, (app::KuPlatformMovement * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x012457A0, bool, get_ApplyOnEditor, (app::KuPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00956AE0, app::IUberState__Array*, get_AffectingUberStates, (app::KuPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C7C20, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::KuPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012457B0, void, ctor, (app::KuPlatformMovement * this_ptr))
} // namespace app::classes::KuPlatformMovement
