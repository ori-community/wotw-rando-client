#pragma once
#include <Modloader/app/structs/UberShaderAtlasTextureDataType__Enum.h>
#include <Modloader/app/structs/UberShaderAtlasTextureDataType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasTextureDataType__Enum {
        inline app::UberShaderAtlasTextureDataType__Enum__Class** type_info() {
            static app::UberShaderAtlasTextureDataType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAtlasTextureDataType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAtlasTextureDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasTextureDataType__Enum__Class>(type_info(), "", "UberShaderAtlasTextureDataType");
        }
        inline app::UberShaderAtlasTextureDataType__Enum* create() {
            return il2cpp::create_object<app::UberShaderAtlasTextureDataType__Enum>(get_class());
        }
    } // namespace UberShaderAtlasTextureDataType__Enum
} // namespace app::classes::types
