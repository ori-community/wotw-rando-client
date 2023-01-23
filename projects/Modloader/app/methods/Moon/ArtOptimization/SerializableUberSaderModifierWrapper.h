#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::Moon::ArtOptimization::SerializableUberSaderModifierWrapper {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, Rebind, (app::SerializableUberSaderModifierWrapper * this_ptr, app::UberShaderModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x00CB1B70, void, ctor, (app::SerializableUberSaderModifierWrapper * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::SerializableUberSaderModifierWrapper
