#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderAtlasTextureData__Class.h>
#include <Modloader/app/structs/UberShaderAtlasTextureData.h>

namespace app::classes::types {
    namespace UberShaderAtlasTextureData {
        namespace {
            inline app::UberShaderAtlasTextureData__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAtlasTextureData__Class** type_info = &type_info_ref;
        inline app::UberShaderAtlasTextureData__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasTextureData__Class>(type_info, "", "UberShaderAtlasTextureData");
        }
        inline app::UberShaderAtlasTextureData* create() {
            return il2cpp::create_object<app::UberShaderAtlasTextureData>(get_class());
        }
    } // namespace UberShaderAtlasTextureData
} // namespace app::classes::types
