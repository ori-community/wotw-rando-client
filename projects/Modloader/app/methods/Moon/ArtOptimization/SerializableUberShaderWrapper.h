#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializableUberSaderModifierWrapper.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_.h>
#include <Modloader/app/structs/SerializableUberShaderWrapper.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::Moon::ArtOptimization::SerializableUberShaderWrapper {
    IL2CPP_REGISTER_METHOD(0x00CB20B0, app::SerializableUberSaderModifierWrapper*, GetOrCreateModifierWrapper, (app::SerializableUberShaderWrapper * this_ptr, app::UberShaderModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebind, (app::SerializableUberShaderWrapper * this_ptr, app::UberShaderComponent* uber_shader))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_*, get_Modifiers, (app::SerializableUberShaderWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB22E0, void, ctor, (app::SerializableUberShaderWrapper * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::SerializableUberShaderWrapper
