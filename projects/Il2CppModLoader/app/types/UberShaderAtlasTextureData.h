#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasTextureData {
        namespace {
            app::UberShaderAtlasTextureData__Class* type_info_ref = nullptr;
        }
        app::UberShaderAtlasTextureData__Class** type_info = &type_info_ref;
        inline app::UberShaderAtlasTextureData__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasTextureData__Class>(type_info, "", "UberShaderAtlasTextureData");
        }
        inline app::UberShaderAtlasTextureData* create() {
            return il2cpp::create_object<app::UberShaderAtlasTextureData>(get_class());
        }
    } // namespace UberShaderAtlasTextureData
} // namespace app::classes::types
