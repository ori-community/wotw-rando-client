#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SceneLayers {
    IL2CPP_REGISTER_METHOD(0x00BA5D70, bool, IsLocked, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x00BA6130, app::SceneLayers *, get_Current, ())
    IL2CPP_REGISTER_METHOD(0x00BA6390, void, ctor, (app::SceneLayers * this_ptr))
}
