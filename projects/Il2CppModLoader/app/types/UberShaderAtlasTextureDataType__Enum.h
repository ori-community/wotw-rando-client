#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasTextureDataType__Enum {
        namespace {
            app::UberShaderAtlasTextureDataType__Enum__Class* type_info_ref = nullptr;
        }
        app::UberShaderAtlasTextureDataType__Enum__Class** type_info = &type_info_ref;
        inline app::UberShaderAtlasTextureDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasTextureDataType__Enum__Class>(type_info, "", "UberShaderAtlasTextureDataType");
        }
        inline app::UberShaderAtlasTextureDataType__Enum* create() {
            return il2cpp::create_object<app::UberShaderAtlasTextureDataType__Enum>(get_class());
        }
    } // namespace UberShaderAtlasTextureDataType__Enum
} // namespace app::classes::types
