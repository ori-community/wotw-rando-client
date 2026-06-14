#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/List_1_UberPoolPerfTest_PrefabInfo_.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/Task_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/UberPoolPerfTest_LoadPrefabInfos_d_41.h>
#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1_, Create, )
    IL2CPP_REGISTER_METHOD(
        0x001A3DC0,
        void,
        Start,
        app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed* this_ptr,
        app::UberPoolPerfTest_LoadPrefabInfos_d_41* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF3E0,
        app::Task_1_System_Collections_Generic_List_1_*,
        get_Task,
        app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3CC0,
        void,
        AwaitUnsafeOnCompleted_1,
        app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed* this_ptr,
        app::TaskAwaiter* awaiter,
        app::UberPoolPerfTest_LoadPrefabInfos_d_41* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001A3D10,
        void,
        AwaitUnsafeOnCompleted_2,
        app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed* this_ptr,
        app::YieldAwaitable_YieldAwaiter* awaiter,
        app::UberPoolPerfTest_LoadPrefabInfos_d_41* state_machine
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF610,
        void,
        SetException,
        app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF5A0,
        void,
        SetResult,
        app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed* this_ptr,
        app::List_1_UberPoolPerfTest_PrefabInfo_* result
    )
    IL2CPP_REGISTER_METHOD(
        0x0018ED60,
        void,
        SetStateMachine,
        app::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1___Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Collections_Generic_List_1_
