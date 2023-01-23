#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FireStickManager.h>

namespace app::classes::FireStickManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FireStickManager * this_ptr))
}
