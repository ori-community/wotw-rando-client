#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ArtOptimizerUtility {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetLocalIdentifierInFile, (app::Object_1 * obj))
    IL2CPP_REGISTER_METHOD(0x008415A0, app::String*, GetModifierTypeName, (app::UberShaderModifier * modifier))
} // namespace app::classes::ArtOptimizerUtility
