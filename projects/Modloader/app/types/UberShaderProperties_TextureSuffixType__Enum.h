#pragma once
#include <Modloader/app/structs/UberShaderProperties_TextureSuffixType__Enum.h>
#include <Modloader/app/structs/UberShaderProperties_TextureSuffixType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperties_TextureSuffixType__Enum {
        inline app::UberShaderProperties_TextureSuffixType__Enum__Class** type_info() {
            static app::UberShaderProperties_TextureSuffixType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderProperties_TextureSuffixType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04793DA8));
            }
            return cache;
        }
        inline app::UberShaderProperties_TextureSuffixType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderProperties_TextureSuffixType__Enum__Class>(type_info(), "", "UberShaderProperties", "TextureSuffixType");
        }
        inline app::UberShaderProperties_TextureSuffixType__Enum* create() {
            return il2cpp::create_object<app::UberShaderProperties_TextureSuffixType__Enum>(get_class());
        }
    } // namespace UberShaderProperties_TextureSuffixType__Enum
} // namespace app::classes::types
