#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QueueUserWorkItemCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/ThreadAbortException.h>
#include <Modloader/app/structs/WaitCallback.h>

namespace app::classes::System::Threading::QueueUserWorkItemCallback {
    IL2CPP_REGISTER_METHOD(0x02329510, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02329670, void, ctor, (app::QueueUserWorkItemCallback * this_ptr, app::WaitCallback* wait_callback, app::Object* state_obj, bool compress_stack, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x02329790, void, IThreadPoolWorkItem_ExecuteWorkItem, (app::QueueUserWorkItemCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (app::QueueUserWorkItemCallback * this_ptr, app::ThreadAbortException* tae))
    IL2CPP_REGISTER_METHOD(0x023298B0, void, WaitCallback_Context, (app::Object * state))
} // namespace app::classes::System::Threading::QueueUserWorkItemCallback
