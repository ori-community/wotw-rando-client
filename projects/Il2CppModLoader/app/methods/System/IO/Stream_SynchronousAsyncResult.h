#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::IO::Stream_SynchronousAsyncResult {
    IL2CPP_REGISTER_METHOD(0x0237F2D0, void, ctor_1, (app::Stream_SynchronousAsyncResult * this_ptr, int32_t bytes_read, app::Object* async_state_object))
    IL2CPP_REGISTER_METHOD(0x020D0390, void, ctor_2, (app::Stream_SynchronousAsyncResult * this_ptr, app::Object* async_state_object))
    IL2CPP_REGISTER_METHOD(0x0237F2E0, void, ctor_3, (app::Stream_SynchronousAsyncResult * this_ptr, app::Exception* ex, app::Object* async_state_object, bool is_write))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCompleted, (app::Stream_SynchronousAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237F330, app::WaitHandle*, get_AsyncWaitHandle, (app::Stream_SynchronousAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_AsyncState, (app::Stream_SynchronousAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CompletedSynchronously, (app::Stream_SynchronousAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237F530, void, ThrowIfError, (app::Stream_SynchronousAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237D910, int32_t, EndRead, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x0237DC70, void, EndWrite, (app::IAsyncResult * async_result))
} // namespace app::classes::System::IO::Stream_SynchronousAsyncResult
