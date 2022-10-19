#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAtlasUtilities_TextureInfo__Array {
        namespace {
            inline app::UberShaderAtlasUtilities_TextureInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAtlasUtilities_TextureInfo__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderAtlasUtilities_TextureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasUtilities_TextureInfo__Array__Class>(type_info, "", "UberShaderAtlasUtilities+TextureInfo[]");
        }
        inline app::UberShaderAtlasUtilities_TextureInfo__Array* create() {
            return il2cpp::create_object<app::UberShaderAtlasUtilities_TextureInfo__Array>(get_class());
        }
    } // namespace UberShaderAtlasUtilities_TextureInfo__Array
} // namespace app::classes::types
