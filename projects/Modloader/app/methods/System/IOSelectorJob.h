#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IOSelectorJob {
    IL2CPP_REGISTER_METHOD(0x0200ADC0, void, ctor, (app::IOSelectorJob * this_ptr, app::IOOperation__Enum operation, app::IOAsyncCallback* callback, app::IOAsyncResult* state))
    IL2CPP_REGISTER_METHOD(0x0200ADD0, void, IThreadPoolWorkItem_ExecuteWorkItem, (app::IOSelectorJob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (app::IOSelectorJob * this_ptr, app::ThreadAbortException* tae))
    IL2CPP_REGISTER_METHOD(0x0200AE00, void, MarkDisposed, (app::IOSelectorJob * this_ptr))
} // namespace app::classes::System::IOSelectorJob
