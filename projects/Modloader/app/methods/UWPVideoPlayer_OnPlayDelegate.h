#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UWPVideoPlayer_OnPlayDelegate.h>

namespace app::classes::UWPVideoPlayer_OnPlayDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::UWPVideoPlayer_OnPlayDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::UWPVideoPlayer_OnPlayDelegate* this_ptr, app::String* filename)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::UWPVideoPlayer_OnPlayDelegate* this_ptr,
        app::String* filename,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::UWPVideoPlayer_OnPlayDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UWPVideoPlayer_OnPlayDelegate
