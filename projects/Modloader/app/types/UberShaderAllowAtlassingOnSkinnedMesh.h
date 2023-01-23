#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderAllowAtlassingOnSkinnedMesh__Class.h>
#include <Modloader/app/structs/UberShaderAllowAtlassingOnSkinnedMesh.h>

namespace app::classes::types {
    namespace UberShaderAllowAtlassingOnSkinnedMesh {
        namespace {
            inline app::UberShaderAllowAtlassingOnSkinnedMesh__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAllowAtlassingOnSkinnedMesh__Class** type_info = &type_info_ref;
        inline app::UberShaderAllowAtlassingOnSkinnedMesh__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAllowAtlassingOnSkinnedMesh__Class>(type_info, "", "UberShaderAllowAtlassingOnSkinnedMesh");
        }
        inline app::UberShaderAllowAtlassingOnSkinnedMesh* create() {
            return il2cpp::create_object<app::UberShaderAllowAtlassingOnSkinnedMesh>(get_class());
        }
    } // namespace UberShaderAllowAtlassingOnSkinnedMesh
} // namespace app::classes::types
