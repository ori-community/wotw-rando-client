#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneLayers.h>

namespace app::classes::SceneLayers {
    IL2CPP_REGISTER_METHOD(0x00BA5D70, bool, IsLocked, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x00BA6130, app::SceneLayers*, get_Current, ())
    IL2CPP_REGISTER_METHOD(0x00BA6390, void, ctor, (app::SceneLayers * this_ptr))
} // namespace app::classes::SceneLayers
