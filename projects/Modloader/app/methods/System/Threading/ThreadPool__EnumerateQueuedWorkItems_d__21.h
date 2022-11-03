#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::ThreadPool__EnumerateQueuedWorkItems_d__21 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023464A0, bool, MoveNext, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IThreadPoolWorkItem*, IEnumerator_IThreadPoolWorkItem__get_Current, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02346680, void, IEnumerator_Reset, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C200, ThreadPool_EnumerateQueuedWorkItems_d_21_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023466D0, app::IEnumerator_1_System_Threading_IThreadPoolWorkItem_*, IEnumerable_IThreadPoolWorkItem__GetEnumerator, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023468D0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ThreadPool_EnumerateQueuedWorkItems_d_21 * this_ptr))
} // namespace app::classes::System::Threading::ThreadPool__EnumerateQueuedWorkItems_d__21
