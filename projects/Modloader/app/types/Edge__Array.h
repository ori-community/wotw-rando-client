#pragma once
#include <Modloader/app/structs/Edge__Array.h>
#include <Modloader/app/structs/Edge__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Edge__Array {
        inline app::Edge__Array__Class** type_info() {
            static app::Edge__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Edge__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Edge__Array__Class* get_class() {
            return il2cpp::get_class<app::Edge__Array__Class>(type_info(), "TriangleNet.Geometry", "Edge[]");
        }
        inline app::Edge__Array* create() {
            return il2cpp::create_object<app::Edge__Array>(get_class());
        }
    } // namespace Edge__Array
} // namespace app::classes::types
