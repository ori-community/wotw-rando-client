#pragma once
#include <Modloader/app/structs/VerletStructure_VerletLink__Array.h>
#include <Modloader/app/structs/VerletStructure_VerletLink__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_VerletLink__Array {
        inline app::VerletStructure_VerletLink__Array__Class** type_info() {
            static app::VerletStructure_VerletLink__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_VerletLink__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_VerletLink__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure_VerletLink__Array__Class>(type_info(), "", "VerletStructure+VerletLink[]");
        }
        inline app::VerletStructure_VerletLink__Array* create() {
            return il2cpp::create_object<app::VerletStructure_VerletLink__Array>(get_class());
        }
    } // namespace VerletStructure_VerletLink__Array
} // namespace app::classes::types
