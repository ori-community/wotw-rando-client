#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StretchGameObject.h>

namespace app::classes::StretchGameObject {
    IL2CPP_REGISTER_METHOD(0x00670970, void, OnPoolSpawned, (app::StretchGameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00670B00, void, OnPoolDespawned, (app::StretchGameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00670C50, void, Start, (app::StretchGameObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00670DF0, void, ctor, (app::StretchGameObject * this_ptr))
} // namespace app::classes::StretchGameObject
