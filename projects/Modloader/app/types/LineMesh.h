#pragma once
#include <Modloader/app/structs/LineMesh.h>
#include <Modloader/app/structs/LineMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineMesh {
        inline app::LineMesh__Class** type_info() {
            static app::LineMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineMesh__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineMesh__Class* get_class() {
            return il2cpp::get_class<app::LineMesh__Class>(type_info(), "", "LineMesh");
        }
        inline app::LineMesh* create() {
            return il2cpp::create_object<app::LineMesh>(get_class());
        }
    } // namespace LineMesh
} // namespace app::classes::types
