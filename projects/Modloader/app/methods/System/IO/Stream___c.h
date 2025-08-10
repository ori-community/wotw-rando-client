#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Stream_ReadWriteParameters.h>
#include <Modloader/app/structs/Stream_c.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/VoidTaskResult.h>

namespace app::classes::System::IO::Stream___c {
    IL2CPP_REGISTER_METHOD(0x0237DF10, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Stream_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0237E050, app::SemaphoreSlim*, _EnsureAsyncActiveSemaphoreInitialized_b__4_0, app::Stream_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0237E1A0, void, _FlushAsync_b__36_0, app::Stream_c* this_ptr, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x0237E2C0, int32_t, _BeginReadInternal_b__39_0, app::Stream_c* this_ptr, app::Object* _p0_)
    IL2CPP_REGISTER_METHOD(
        0x0237E3C0,
        app::IAsyncResult*,
        _BeginEndReadAsync_b__43_0,
        app::Stream_c* this_ptr,
        app::Stream* stream,
        app::Stream_ReadWriteParameters args,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x0237E430, int32_t, _BeginEndReadAsync_b__43_1, app::Stream_c* this_ptr, app::Stream* stream, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x0237E460, int32_t, _BeginWriteInternal_b__46_0, app::Stream_c* this_ptr, app::Object* _p0_)
    IL2CPP_REGISTER_METHOD(0x0237E560, void, _RunReadWriteTaskWhenReady_b__47_0, app::Stream_c* this_ptr, app::Task* t, app::Object* state)
    IL2CPP_REGISTER_METHOD(
        0x0237E650,
        app::IAsyncResult*,
        _BeginEndWriteAsync_b__53_0,
        app::Stream_c* this_ptr,
        app::Stream* stream,
        app::Stream_ReadWriteParameters args,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x0237E6C0,
        app::VoidTaskResult,
        _BeginEndWriteAsync_b__53_1,
        app::Stream_c* this_ptr,
        app::Stream* stream,
        app::IAsyncResult* async_result
    )
} // namespace app::classes::System::IO::Stream___c
