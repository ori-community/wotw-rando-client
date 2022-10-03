#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CapsuleCastManager {
    IL2CPP_REGISTER_METHOD(0x00B22E80, app::CapsulecastCommand, get_InvalidCmd, (app::CapsuleCastManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B22F40, app::JobHandle, ScheduleBatch, (app::CapsuleCastManager * this_ptr, app::NativeArray_1_UnityEngine_CapsulecastCommand_ commands, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t count, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x00B230B0, bool, PerformImmediateCastStatic, (app::CapsulecastCommand cmd, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x00B23140, bool, PerformImmediateCast, (app::CapsuleCastManager * this_ptr, app::CapsulecastCommand cmd, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckDuplicate, (app::CapsuleCastManager * this_ptr, app::CapsulecastCommand cmd, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x00B232B0, bool, PerformCast, (app::CapsulecastCommand cmd, app::RaycastHit* hit, int32_t* request_i_d, bool guarantee_immediate_result, bool force_immediate))
    IL2CPP_REGISTER_METHOD(0x00B23480, void, ctor, (app::CapsuleCastManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23520, void, cctor, ())
} // namespace app::classes::CapsuleCastManager
