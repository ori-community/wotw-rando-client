#pragma once
#include <Modloader/app/structs/VerletEdge__Array.h>
#include <Modloader/app/structs/VerletEdge__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletEdge__Array {
        inline app::VerletEdge__Array__Class** type_info() {
            static app::VerletEdge__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletEdge__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletEdge__Array__Class>(type_info(), "", "VerletEdge[]");
        }
        inline app::VerletEdge__Array* create() {
            return il2cpp::create_object<app::VerletEdge__Array>(get_class());
        }
    } // namespace VerletEdge__Array
} // namespace app::classes::types
