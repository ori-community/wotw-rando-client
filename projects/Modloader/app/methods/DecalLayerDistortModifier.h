#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DecalLayerDistortModifier.h>

namespace app::classes::DecalLayerDistortModifier {
    IL2CPP_REGISTER_METHOD(0x00B7E580, void, SetProperties, (app::DecalLayerDistortModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7E720, void, ctor, (app::DecalLayerDistortModifier * this_ptr))
} // namespace app::classes::DecalLayerDistortModifier
