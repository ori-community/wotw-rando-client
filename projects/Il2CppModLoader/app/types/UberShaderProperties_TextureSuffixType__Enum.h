#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderProperties_TextureSuffixType__Enum {
        inline app::UberShaderProperties_TextureSuffixType__Enum__Class** type_info = (app::UberShaderProperties_TextureSuffixType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04793DA8));
        inline app::UberShaderProperties_TextureSuffixType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderProperties_TextureSuffixType__Enum__Class>(type_info, "", "UberShaderProperties", "TextureSuffixType");
        }
        inline app::UberShaderProperties_TextureSuffixType__Enum* create() {
            return il2cpp::create_object<app::UberShaderProperties_TextureSuffixType__Enum>(get_class());
        }
    } // namespace UberShaderProperties_TextureSuffixType__Enum
} // namespace app::classes::types
