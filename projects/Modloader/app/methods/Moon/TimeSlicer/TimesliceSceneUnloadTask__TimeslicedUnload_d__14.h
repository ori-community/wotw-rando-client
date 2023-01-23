#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimesliceSceneUnloadTask_TimeslicedUnload_d_14.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::TimeSlicer::TimesliceSceneUnloadTask__TimeslicedUnload_d__14 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C6220, bool, MoveNext, (app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C6760, void, IEnumerator_Reset, (app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772730, TimesliceSceneUnloadTask_TimeslicedUnload_d_14_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::TimesliceSceneUnloadTask_TimeslicedUnload_d_14 * this_ptr))
} // namespace app::classes::Moon::TimeSlicer::TimesliceSceneUnloadTask__TimeslicedUnload_d__14
