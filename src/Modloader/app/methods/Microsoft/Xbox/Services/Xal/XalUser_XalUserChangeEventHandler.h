#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XalUserChangeType__Enum.h>
#include <Modloader/app/structs/XalUser_InternalXalUserLocalId.h>
#include <Modloader/app/structs/XalUser_XalUserChangeEventHandler.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalUser_XalUserChangeEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::XalUser_XalUserChangeEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01443A00,
        void,
        Invoke,
        app::XalUser_XalUserChangeEventHandler* this_ptr,
        void* context,
        app::XalUser_InternalXalUserLocalId user_id,
        app::XalUserChangeType__Enum change
    )
    IL2CPP_REGISTER_METHOD(
        0x01443DB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::XalUser_XalUserChangeEventHandler* this_ptr,
        void* context,
        app::XalUser_InternalXalUserLocalId user_id,
        app::XalUserChangeType__Enum change,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::XalUser_XalUserChangeEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Microsoft::Xbox::Services::Xal::XalUser_XalUserChangeEventHandler
