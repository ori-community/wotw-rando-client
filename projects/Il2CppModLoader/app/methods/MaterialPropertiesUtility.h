#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MaterialPropertiesUtility {
    IL2CPP_REGISTER_METHOD(0x01382A20, void, ApplyShaderProperty, (app::OverridableShaderProperty * shader_property_from, app::OverridableShaderProperty * shader_property_to))
    IL2CPP_REGISTER_METHOD(0x01382A50, void, ApplyTextureProperties, (app::Dictionary_2_System_String_OverridableTextureProperty_ * texture_properties_dictionary_from, app::Dictionary_2_System_String_OverridableTextureProperty_ * texture_properties_dictionary_to))
    IL2CPP_REGISTER_METHOD(0x01382D80, void, ApplyFloatProperties, (app::Dictionary_2_System_String_OverridableFloatProperty_ * float_properties_dictionary_from, app::Dictionary_2_System_String_OverridableFloatProperty_ * float_properties_dictionary_to))
    IL2CPP_REGISTER_METHOD(0x013830C0, void, ApplyColorProperties, (app::Dictionary_2_System_String_OverridableColorProperty_ * color_properties_dictionary_from, app::Dictionary_2_System_String_OverridableColorProperty_ * color_properties_dictionary_to))
}
