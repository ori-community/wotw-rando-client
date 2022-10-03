#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperties_TextureSuffixType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderProperties_TextureSuffixType__Enum__Class** type_info;
        inline app::UberShaderProperties_TextureSuffixType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderProperties_TextureSuffixType__Enum__Class>(type_info, "", "UberShaderProperties", "TextureSuffixType");
        }
        inline app::UberShaderProperties_TextureSuffixType__Enum* create() {
            return il2cpp::create_object<app::UberShaderProperties_TextureSuffixType__Enum>(get_class());
        }
    } // namespace UberShaderProperties_TextureSuffixType__Enum
} // namespace app::classes::types
