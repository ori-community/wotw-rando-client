#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Stream_SynchronousAsyncResult_c.h>

namespace app::classes::System::IO::Stream_SynchronousAsyncResult___c {
    IL2CPP_REGISTER_METHOD(0x0237F570, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Stream_SynchronousAsyncResult_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0237F6B0, app::ManualResetEvent*, _get_AsyncWaitHandle_b__12_0, app::Stream_SynchronousAsyncResult_c* this_ptr)
} // namespace app::classes::System::IO::Stream_SynchronousAsyncResult___c
