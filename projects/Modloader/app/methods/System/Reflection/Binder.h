#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Binder.h>

namespace app::classes::System::Reflection::Binder {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Binder * this_ptr))
}
