#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AdditiveLayerModifier.h>

namespace app::classes::AdditiveLayerModifier {
    IL2CPP_REGISTER_METHOD(0x004CA7C0, void, ApplyMultipliers, app::AdditiveLayerModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x004CAC20, void, SetProperties, app::AdditiveLayerModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004CAD50, void, ctor, app::AdditiveLayerModifier* this_ptr)
} // namespace app::classes::AdditiveLayerModifier
