#pragma once
#include <Modloader/app/structs/PathNode__Array.h>
#include <Modloader/app/structs/PathNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathNode__Array {
        inline app::PathNode__Array__Class** type_info() {
            static app::PathNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathNode__Array__Class* get_class() {
            return il2cpp::get_class<app::PathNode__Array__Class>(type_info(), "", "PathNode[]");
        }
        inline app::PathNode__Array* create() {
            return il2cpp::create_object<app::PathNode__Array>(get_class());
        }
    } // namespace PathNode__Array
} // namespace app::classes::types
