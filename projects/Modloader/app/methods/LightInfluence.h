#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightInfluence.h>
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>

namespace app::classes::LightInfluence {
    IL2CPP_REGISTER_METHOD(0x0114D0B0, void, ctor, (app::LightInfluence * this_ptr, app::LightPriority_Layer__Enum layer))
    IL2CPP_REGISTER_METHOD(0x0114D0C0, void, CopyTo, (app::LightInfluence * this_ptr, app::LightInfluence** destination))
    IL2CPP_REGISTER_METHOD(0x0114D0E0, void, Lerp, (app::LightInfluence * from, app::LightInfluence* to, app::LightInfluence** destination, float t))
} // namespace app::classes::LightInfluence
