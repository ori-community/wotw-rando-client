#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallbackFlags.h>

namespace app::classes::AK::Wwise::CallbackFlags {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CallbackFlags * this_ptr))
}
