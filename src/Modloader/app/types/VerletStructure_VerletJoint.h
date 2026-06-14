#pragma once
#include <Modloader/app/structs/VerletStructure_VerletJoint.h>
#include <Modloader/app/structs/VerletStructure_VerletJoint__Array.h>
#include <Modloader/app/structs/VerletStructure_VerletJoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_VerletJoint {
        inline app::VerletStructure_VerletJoint__Class** type_info() {
            static app::VerletStructure_VerletJoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_VerletJoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_VerletJoint__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_VerletJoint__Class>(type_info(), "", "VerletStructure", "VerletJoint");
        }
        inline app::VerletStructure_VerletJoint* create() {
            return il2cpp::create_object<app::VerletStructure_VerletJoint>(get_class());
        }
        inline app::VerletStructure_VerletJoint__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure_VerletJoint__Array>(get_class(), size);
        }
        inline app::VerletStructure_VerletJoint__Array* create_array(const std::vector<app::VerletStructure_VerletJoint*>& items) {
            return il2cpp::array_new<app::VerletStructure_VerletJoint__Array>(get_class(), items);
        }
    } // namespace VerletStructure_VerletJoint
} // namespace app::classes::types
