#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OpenReadCompletedEventArgs.h>
#include <Modloader/app/structs/WebClient_c_DisplayClass221_0.h>

namespace app::classes::System::Net::WebClient___c__DisplayClass221_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WebClient_c_DisplayClass221_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D5E600,
        void,
        _OpenReadTaskAsync_b__0,
        app::WebClient_c_DisplayClass221_0* this_ptr,
        app::Object* sender,
        app::OpenReadCompletedEventArgs* e
    )
} // namespace app::classes::System::Net::WebClient___c__DisplayClass221_0
