#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SphereCastManager {
    IL2CPP_REGISTER_METHOD(0x00952390, app::SpherecastCommand, get_InvalidCmd, (app::SphereCastManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00952450, app::JobHandle, ScheduleBatch, (app::SphereCastManager * this_ptr, app::NativeArray_1_UnityEngine_SpherecastCommand_ commands, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t count, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x009524D0, bool, PerformImmediateCastStatic, (app::SpherecastCommand cmd, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x00952610, bool, PerformImmediateCast, (app::SphereCastManager * this_ptr, app::SpherecastCommand cmd, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckDuplicate, (app::SphereCastManager * this_ptr, app::SpherecastCommand cmd, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x009526E0, bool, PerformCast, (app::SpherecastCommand cmd, app::RaycastHit* hit, int32_t* request_i_d, bool guarantee_immediate_result, bool force_immediate))
    IL2CPP_REGISTER_METHOD(0x00952830, void, PerformMultipleCasts, (app::SpherecastCommand__Array * cmds, app::RaycastHit__Array* hits, app::Boolean__Array* hit_results, int32_t cmd_count, int32_t* request_i_d, bool guarantee_immediate_result, bool force_immediate))
    IL2CPP_REGISTER_METHOD(0x00952A50, void, ctor, (app::SphereCastManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00952AF0, void, cctor, ())
} // namespace app::classes::SphereCastManager
