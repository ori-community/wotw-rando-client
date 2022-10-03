#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_VerletJoint {
        namespace {
            app::VerletStructure_VerletJoint__Class* type_info_ref = nullptr;
        }
        app::VerletStructure_VerletJoint__Class** type_info = &type_info_ref;
        inline app::VerletStructure_VerletJoint__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_VerletJoint__Class>(type_info, "", "VerletStructure", "VerletJoint");
        }
        inline app::VerletStructure_VerletJoint* create() {
            return il2cpp::create_object<app::VerletStructure_VerletJoint>(get_class());
        }
        inline app::VerletStructure_VerletJoint__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure_VerletJoint__Array>(get_class(), size);
        }
    } // namespace VerletStructure_VerletJoint
} // namespace app::classes::types
