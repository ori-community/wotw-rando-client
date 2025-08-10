#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UploadValuesCompletedEventArgs.h>
#include <Modloader/app/structs/WebClient_c_DisplayClass245_0.h>

namespace app::classes::System::Net::WebClient___c__DisplayClass245_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WebClient_c_DisplayClass245_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D5FDB0,
        void,
        _UploadValuesTaskAsync_b__0,
        app::WebClient_c_DisplayClass245_0* this_ptr,
        app::Object* sender,
        app::UploadValuesCompletedEventArgs* e
    )
} // namespace app::classes::System::Net::WebClient___c__DisplayClass245_0
