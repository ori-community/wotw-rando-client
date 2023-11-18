#pragma once
#include <Modloader/app/structs/MeshTrail__Array.h>
#include <Modloader/app/structs/MeshTrail__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail__Array {
        inline app::MeshTrail__Array__Class** type_info() {
            static app::MeshTrail__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrail__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrail__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail__Array__Class>(type_info(), "", "MeshTrail[]");
        }
        inline app::MeshTrail__Array* create() {
            return il2cpp::create_object<app::MeshTrail__Array>(get_class());
        }
    } // namespace MeshTrail__Array
} // namespace app::classes::types
