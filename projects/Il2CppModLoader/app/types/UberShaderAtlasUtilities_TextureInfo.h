#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAtlasUtilities_TextureInfo {
        namespace {
            inline app::UberShaderAtlasUtilities_TextureInfo__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAtlasUtilities_TextureInfo__Class** type_info = &type_info_ref;
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
        inline app::UberShaderAtlasUtilities_TextureInfo__Array* create_array(const std::vector<app::UberShaderAtlasUtilities_TextureInfo>& items) {
            return il2cpp::array_new<app::UberShaderAtlasUtilities_TextureInfo__Array>(get_class(), items);
        }
    } // namespace UberShaderAtlasUtilities_TextureInfo
} // namespace app::classes::types
