#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::SemaphoreSlim_TaskNode {
    IL2CPP_REGISTER_METHOD(0x0232D090, void, ctor, (app::SemaphoreSlim_TaskNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232D1C0, void, IThreadPoolWorkItem_ExecuteWorkItem, (app::SemaphoreSlim_TaskNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (app::SemaphoreSlim_TaskNode * this_ptr, app::ThreadAbortException * tae))
}
