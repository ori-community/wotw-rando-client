#pragma once
#include <Modloader/app/structs/UberShaderAllowAtlassingOnSkinnedMesh.h>
#include <Modloader/app/structs/UberShaderAllowAtlassingOnSkinnedMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAllowAtlassingOnSkinnedMesh {
        inline app::UberShaderAllowAtlassingOnSkinnedMesh__Class** type_info() {
            static app::UberShaderAllowAtlassingOnSkinnedMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAllowAtlassingOnSkinnedMesh__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAllowAtlassingOnSkinnedMesh__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAllowAtlassingOnSkinnedMesh__Class>(type_info(), "", "UberShaderAllowAtlassingOnSkinnedMesh");
        }
        inline app::UberShaderAllowAtlassingOnSkinnedMesh* create() {
            return il2cpp::create_object<app::UberShaderAllowAtlassingOnSkinnedMesh>(get_class());
        }
    } // namespace UberShaderAllowAtlassingOnSkinnedMesh
} // namespace app::classes::types
