#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_.h>
#include <Modloader/app/structs/Task_1_Microsoft_Xbox_Services_Xal_XalUser_.h>
#include <Modloader/app/structs/XalUser_1.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ {
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor, app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027774F0,
        bool,
        TrySetException,
        app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA280,
        app::Task_1_Microsoft_Xbox_Services_Xal_XalUser_*,
        get_Task,
        app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_* this_ptr, app::XalUser_1* result)
    IL2CPP_REGISTER_METHOD(
        0x02777610,
        void,
        SetException,
        app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_* this_ptr,
        app::Exception* exception
    )
    IL2CPP_REGISTER_METHOD(0x02777830, void, SetCanceled, app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_* this_ptr)
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_
