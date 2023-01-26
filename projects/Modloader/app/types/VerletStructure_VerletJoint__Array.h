#pragma once
#include <Modloader/app/structs/VerletStructure_VerletJoint__Array.h>
#include <Modloader/app/structs/VerletStructure_VerletJoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_VerletJoint__Array {
        inline app::VerletStructure_VerletJoint__Array__Class** type_info() {
            static app::VerletStructure_VerletJoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_VerletJoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_VerletJoint__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure_VerletJoint__Array__Class>(type_info(), "", "VerletStructure+VerletJoint[]");
        }
        inline app::VerletStructure_VerletJoint__Array* create() {
            return il2cpp::create_object<app::VerletStructure_VerletJoint__Array>(get_class());
        }
    } // namespace VerletStructure_VerletJoint__Array
} // namespace app::classes::types
