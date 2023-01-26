#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaycastCommand.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/RayCastManager.h>
#include <Modloader/app/structs/RaycastCommand__Array.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>

namespace app::classes::RayCastManager {
    IL2CPP_REGISTER_METHOD(0x0072FBC0, app::RaycastCommand, get_InvalidCmd, (app::RayCastManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072FC80, app::JobHandle, ScheduleBatch, (app::RayCastManager * this_ptr, app::NativeArray_1_UnityEngine_RaycastCommand_ commands, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t count, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x0072FD00, bool, PerformImmediateCastStatic, (app::RaycastCommand cmd, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x0072FE30, bool, PerformImmediateCast, (app::RayCastManager * this_ptr, app::RaycastCommand cmd, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x0072FF00, void, CheckDuplicate, (app::RayCastManager * this_ptr, app::RaycastCommand cmd, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x007301B0, bool, PerformCast, (app::RaycastCommand cmd, app::RaycastHit* hit, int32_t* request_i_d, bool guarantee_immediate_result, bool force_immediate))
    IL2CPP_REGISTER_METHOD(0x007302F0, void, PerformMultipleCasts, (app::RaycastCommand__Array * cmds, app::RaycastHit__Array* hits, app::Boolean__Array* hit_results, int32_t cmd_count, int32_t* request_i_d, bool guarantee_immediate_result, bool force_immediate))
    IL2CPP_REGISTER_METHOD(0x00730500, void, ctor, (app::RayCastManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007305A0, void, cctor, ())
} // namespace app::classes::RayCastManager
