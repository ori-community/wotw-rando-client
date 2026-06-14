#pragma once
#include <Modloader/app/structs/UberShaderAtlasTextureData.h>
#include <Modloader/app/structs/UberShaderAtlasTextureData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasTextureData {
        inline app::UberShaderAtlasTextureData__Class** type_info() {
            static app::UberShaderAtlasTextureData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAtlasTextureData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAtlasTextureData__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasTextureData__Class>(type_info(), "", "UberShaderAtlasTextureData");
        }
        inline app::UberShaderAtlasTextureData* create() {
            return il2cpp::create_object<app::UberShaderAtlasTextureData>(get_class());
        }
    } // namespace UberShaderAtlasTextureData
} // namespace app::classes::types
