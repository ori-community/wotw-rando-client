#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DecalLayerModifier {
    IL2CPP_REGISTER_METHOD(0x00B7EBD0, void, SetProperties, (app::DecalLayerModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7ED00, void, ctor, (app::DecalLayerModifier * this_ptr))
} // namespace app::classes::DecalLayerModifier
