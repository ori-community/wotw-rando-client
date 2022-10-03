#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAllowAtlassingOnSkinnedMesh {
        namespace {
            app::UberShaderAllowAtlassingOnSkinnedMesh__Class* type_info_ref = nullptr;
        }
        app::UberShaderAllowAtlassingOnSkinnedMesh__Class** type_info = &type_info_ref;
        inline app::UberShaderAllowAtlassingOnSkinnedMesh__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAllowAtlassingOnSkinnedMesh__Class>(type_info, "", "UberShaderAllowAtlassingOnSkinnedMesh");
        }
        inline app::UberShaderAllowAtlassingOnSkinnedMesh* create() {
            return il2cpp::create_object<app::UberShaderAllowAtlassingOnSkinnedMesh>(get_class());
        }
    } // namespace UberShaderAllowAtlassingOnSkinnedMesh
} // namespace app::classes::types
