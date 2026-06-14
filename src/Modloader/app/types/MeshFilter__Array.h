#pragma once
#include <Modloader/app/structs/MeshFilter__Array.h>
#include <Modloader/app/structs/MeshFilter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshFilter__Array {
        inline app::MeshFilter__Array__Class** type_info() {
            static app::MeshFilter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshFilter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshFilter__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshFilter__Array__Class>(type_info(), "UnityEngine", "MeshFilter[]");
        }
        inline app::MeshFilter__Array* create() {
            return il2cpp::create_object<app::MeshFilter__Array>(get_class());
        }
    } // namespace MeshFilter__Array
} // namespace app::classes::types
