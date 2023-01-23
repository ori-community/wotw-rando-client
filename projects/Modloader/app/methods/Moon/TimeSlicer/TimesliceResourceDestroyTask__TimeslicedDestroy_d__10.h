#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimesliceResourceDestroyTask_TimeslicedDestroy_d_10.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::TimeSlicer::TimesliceResourceDestroyTask__TimeslicedDestroy_d__10 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C5290, bool, MoveNext, (app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C54B0, void, IEnumerator_Reset, (app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DCF0, TimesliceResourceDestroyTask_TimeslicedDestroy_d_10_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::TimesliceResourceDestroyTask_TimeslicedDestroy_d_10 * this_ptr))
} // namespace app::classes::Moon::TimeSlicer::TimesliceResourceDestroyTask__TimeslicedDestroy_d__10
