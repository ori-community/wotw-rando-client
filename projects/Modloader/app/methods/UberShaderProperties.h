#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderProperties_TextureSuffixType__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Float__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Vector__Enum.h>

namespace app::classes::UberShaderProperties {
    IL2CPP_REGISTER_METHOD(0x019170F0, int32_t, get_MainTexturePropertyID, ())
    IL2CPP_REGISTER_METHOD(0x01917190, int32_t, get_MainColorPropertyID, ())
    IL2CPP_REGISTER_METHOD(0x01917220, int32_t, GetTexturePropertyId, (app::UberShaderProperty_Texture__Enum property, app::UberShaderProperties_TextureSuffixType__Enum suffix_type))
    IL2CPP_REGISTER_METHOD(0x01917570, int32_t, GetColorPropertyId, (app::UberShaderProperty_Color__Enum property))
    IL2CPP_REGISTER_METHOD(0x01917640, int32_t, GetVectorPropertyId, (app::UberShaderProperty_Vector__Enum property))
    IL2CPP_REGISTER_METHOD(0x01917710, int32_t, GetFloatPropertyId, (app::UberShaderProperty_Float__Enum property))
    IL2CPP_REGISTER_METHOD(0x019177E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01919E20, void, CreateTextureBindings, (app::UberShaderProperty_Texture__Enum property, app::String* binding_name))
    IL2CPP_REGISTER_METHOD(0x0191A260, app::UberShaderProperty_Texture__Enum, GetTextureProperty, (int32_t property_id, bool* property_found))
} // namespace app::classes::UberShaderProperties
