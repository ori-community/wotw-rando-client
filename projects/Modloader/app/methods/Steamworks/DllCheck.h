#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DllCheck.h>

namespace app::classes::Steamworks::DllCheck {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Test, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DllCheck* this_ptr)
} // namespace app::classes::Steamworks::DllCheck
