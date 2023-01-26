#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::ArtOptimizerUtility {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetLocalIdentifierInFile, (app::Object_1 * obj))
    IL2CPP_REGISTER_METHOD(0x008415A0, app::String*, GetModifierTypeName, (app::UberShaderModifier * modifier))
} // namespace app::classes::ArtOptimizerUtility
