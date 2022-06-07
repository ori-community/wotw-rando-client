#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SceneSanity {
    IL2CPP_REGISTER_METHOD(0x00BBA030, app::String *, GetFullHierarchy, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x00BBA210, void, ctor, (app::SceneSanity * this_ptr))
}
