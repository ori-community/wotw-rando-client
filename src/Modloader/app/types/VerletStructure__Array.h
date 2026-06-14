#pragma once
#include <Modloader/app/structs/VerletStructure__Array.h>
#include <Modloader/app/structs/VerletStructure__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure__Array {
        inline app::VerletStructure__Array__Class** type_info() {
            static app::VerletStructure__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure__Array__Class>(type_info(), "", "VerletStructure[]");
        }
        inline app::VerletStructure__Array* create() {
            return il2cpp::create_object<app::VerletStructure__Array>(get_class());
        }
    } // namespace VerletStructure__Array
} // namespace app::classes::types
