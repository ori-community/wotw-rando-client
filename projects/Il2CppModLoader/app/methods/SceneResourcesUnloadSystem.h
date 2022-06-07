#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SceneResourcesUnloadSystem {
    IL2CPP_REGISTER_METHOD(0x00BB1720, app::ResoucesUnloadingMode__Enum, get_Mode, ())
    IL2CPP_REGISTER_METHOD(0x00BB17C0, void, set_Mode, (app::ResoucesUnloadingMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00BB1870, void, DecreaseRefCount, (app::SceneResourcesUnloadSystem * this_ptr, app::Object_1__Array * resources))
    IL2CPP_REGISTER_METHOD(0x00BB1970, void, IncreaseRefCount, (app::SceneResourcesUnloadSystem * this_ptr, app::Object_1__Array * resources))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneResourcesUnloadSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
