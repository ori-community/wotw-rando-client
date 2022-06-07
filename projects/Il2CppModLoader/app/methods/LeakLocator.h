#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LeakLocator {
    IL2CPP_REGISTER_METHOD(0x015C2F90, void, Awake, (app::LeakLocator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C2FF0, void, UpdateList, (app::LeakLocator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C3190, void, FixedUpdate, (app::LeakLocator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C3240, void, ctor, (app::LeakLocator * this_ptr))
}
