#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneLayers_Layer.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SceneLayers_Layer {
    IL2CPP_REGISTER_METHOD(0x00BA6CF0, void, ctor, app::SceneLayers_Layer* this_ptr, app::String* name)
}
