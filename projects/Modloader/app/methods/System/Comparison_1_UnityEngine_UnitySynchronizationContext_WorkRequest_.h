#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::UnitySynchronizationContext_WorkRequest x, app::UnitySynchronizationContext_WorkRequest y))
    IL2CPP_REGISTER_METHOD(0x02C85BB0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::UnitySynchronizationContext_WorkRequest x, app::UnitySynchronizationContext_WorkRequest y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_
