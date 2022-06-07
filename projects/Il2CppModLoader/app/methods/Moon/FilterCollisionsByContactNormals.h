#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FilterCollisionsByContactNormals {
    IL2CPP_REGISTER_METHOD(0x01222E00, void, OnValidate, (app::FilterCollisionsByContactNormals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IStrippable_DoStrip, (app::FilterCollisionsByContactNormals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FilterCollisionsByContactNormals * this_ptr))
}
