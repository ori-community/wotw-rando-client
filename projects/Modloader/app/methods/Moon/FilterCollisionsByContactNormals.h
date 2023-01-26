#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FilterCollisionsByContactNormals.h>

namespace app::classes::Moon::FilterCollisionsByContactNormals {
    IL2CPP_REGISTER_METHOD(0x01222E00, void, OnValidate, (app::FilterCollisionsByContactNormals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IStrippable_DoStrip, (app::FilterCollisionsByContactNormals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FilterCollisionsByContactNormals * this_ptr))
} // namespace app::classes::Moon::FilterCollisionsByContactNormals
