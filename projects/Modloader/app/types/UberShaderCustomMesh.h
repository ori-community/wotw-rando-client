#pragma once
#include <Modloader/app/structs/UberShaderCustomMesh.h>
#include <Modloader/app/structs/UberShaderCustomMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCustomMesh {
        inline app::UberShaderCustomMesh__Class** type_info() {
            static app::UberShaderCustomMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderCustomMesh__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderCustomMesh__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomMesh__Class>(type_info(), "", "UberShaderCustomMesh");
        }
        inline app::UberShaderCustomMesh* create() {
            return il2cpp::create_object<app::UberShaderCustomMesh>(get_class());
        }
    } // namespace UberShaderCustomMesh
} // namespace app::classes::types
