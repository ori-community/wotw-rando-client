#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasUtilities_TextureInfo {
        namespace {
            app::UberShaderAtlasUtilities_TextureInfo__Class* type_info_ref = nullptr;
        }
        app::UberShaderAtlasUtilities_TextureInfo__Class** type_info = &type_info_ref;
        inline app::UberShaderAtlasUtilities_TextureInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAtlasUtilities_TextureInfo__Class>(type_info, "", "UberShaderAtlasUtilities", "TextureInfo");
        }
        inline app::UberShaderAtlasUtilities_TextureInfo* create() {
            return il2cpp::create_object<app::UberShaderAtlasUtilities_TextureInfo>(get_class());
        }
        inline app::UberShaderAtlasUtilities_TextureInfo__Boxed* box(app::UberShaderAtlasUtilities_TextureInfo value) {
            return il2cpp::box_value<app::UberShaderAtlasUtilities_TextureInfo__Boxed>(get_class(), value);
        }
        inline app::UberShaderAtlasUtilities_TextureInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAtlasUtilities_TextureInfo__Array>(get_class(), size);
        }
    } // namespace UberShaderAtlasUtilities_TextureInfo
} // namespace app::classes::types
