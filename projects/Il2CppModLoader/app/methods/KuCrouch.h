#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KuCrouch {
    IL2CPP_REGISTER_METHOD(0x0122EAF0, void, OnSetReferenceToKu, (app::KuCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122EB20, void, OnEnable, (app::KuCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122ECD0, void, OnDisable, (app::KuCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122EEA0, bool, get_IsStatePerforming, (app::KuCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122EED0, void, UpdateState, (app::KuCrouch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122F2D0, bool, ShouldCrouch, (app::KuCrouch * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792018, KuCrouch_ShouldCrouch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0122F500, void, ModifyHorizontalPlatformMovementSettings, (app::KuCrouch * this_ptr, app::HorizontalPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x0477C9A0, KuCrouch_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0122F550, void, ctor, (app::KuCrouch * this_ptr))
}
