#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokBossLocomotion_ModifyAccelerationDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, float* a, float* b))
    IL2CPP_REGISTER_METHOD(0x012E77F0, app::IAsyncResult*, BeginInvoke, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, float* a, float* b, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, float* a, float* b, app::IAsyncResult* result))
} // namespace app::classes::KwolokBossLocomotion_ModifyAccelerationDelegate
