#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NewSaveDataAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::NewSaveDataAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::NewSaveDataAction * this_ptr))
}
