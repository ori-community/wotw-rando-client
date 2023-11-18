#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/BeforeRenderHelper_OrderBlock.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001749E0, app::BeforeRenderHelper_OrderBlock, get_Current, (app::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00174A10, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_BeforeRenderHelper_OrderBlock_
