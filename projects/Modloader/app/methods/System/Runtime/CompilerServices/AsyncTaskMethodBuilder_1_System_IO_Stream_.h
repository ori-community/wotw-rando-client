#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_IO_Stream_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse_.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Task_1_System_IO_Stream_.h>
#include <Modloader/app/structs/XmlDownloadManager_GetNonFileStreamAsync_d_5.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_IO_Stream_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_System_IO_Stream_, Create, )
    IL2CPP_REGISTER_METHOD(
        0x001A3D70,
        void,
        Start,
        app::AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed* this_ptr,
        app::XmlDownloadManager_GetNonFileStreamAsync_d_5* state_machine
    )
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_System_IO_Stream_*, get_Task, app::AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001A3C80,
        void,
        AwaitUnsafeOnCompleted,
        app::AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed* this_ptr,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse_* awaiter,
        app::XmlDownloadManager_GetNonFileStreamAsync_d_5* state_machine
    )
    IL2CPP_REGISTER_METHOD(0x001FF610, void, SetException, app::AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x001FF5A0, void, SetResult, app::AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed* this_ptr, app::Stream* result)
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine,
        app::AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_IO_Stream_
