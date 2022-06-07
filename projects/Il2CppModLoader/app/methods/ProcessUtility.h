#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ProcessUtility {
    IL2CPP_REGISTER_METHOD(0x031918C0, app::String *, ExcecuteCommandLine, (app::String * application, app::String * arguments))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProcessUtility * this_ptr))
}
