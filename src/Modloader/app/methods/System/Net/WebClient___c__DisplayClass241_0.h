#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UploadFileCompletedEventArgs.h>
#include <Modloader/app/structs/WebClient_c_DisplayClass241_0.h>

namespace app::classes::System::Net::WebClient___c__DisplayClass241_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WebClient_c_DisplayClass241_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D5FA40,
        void,
        _UploadFileTaskAsync_b__0,
        app::WebClient_c_DisplayClass241_0* this_ptr,
        app::Object* sender,
        app::UploadFileCompletedEventArgs* e
    )
} // namespace app::classes::System::Net::WebClient___c__DisplayClass241_0
