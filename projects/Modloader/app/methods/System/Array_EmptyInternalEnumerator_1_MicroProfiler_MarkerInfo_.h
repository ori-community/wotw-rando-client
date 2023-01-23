#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, (app::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D058E0, app::MicroProfiler_MarkerInfo, get_Current, (app::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D830, Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A70F30, app::Object*, IEnumerator_get_Current, (app::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, (app::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, ())
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_MicroProfiler_MarkerInfo_
