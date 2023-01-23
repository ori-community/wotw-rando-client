#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WorldmapModifier.h>

namespace app::classes::WorldmapModifier {
    IL2CPP_REGISTER_METHOD(0x0058D2A0, void, SetProperties, (app::WorldmapModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058D3D0, void, ctor, (app::WorldmapModifier * this_ptr))
} // namespace app::classes::WorldmapModifier
