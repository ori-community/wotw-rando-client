#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimesliceResourceUnloadTask_TimeslicedUnload_d_10.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::TimeSlicer::TimesliceResourceUnloadTask__TimeslicedUnload_d__10 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C59F0, bool, MoveNext, (app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C5BC0, void, IEnumerator_Reset, (app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C830, TimesliceResourceUnloadTask_TimeslicedUnload_d_10_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::TimesliceResourceUnloadTask_TimeslicedUnload_d_10 * this_ptr))
} // namespace app::classes::Moon::TimeSlicer::TimesliceResourceUnloadTask__TimeslicedUnload_d__10
