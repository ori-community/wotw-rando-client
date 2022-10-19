#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_JointState {
        namespace {
            inline app::VerletStructure_JointState__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructure_JointState__Class** type_info = &type_info_ref;
        inline app::VerletStructure_JointState__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_JointState__Class>(type_info, "", "VerletStructure", "JointState");
        }
        inline app::VerletStructure_JointState* create() {
            return il2cpp::create_object<app::VerletStructure_JointState>(get_class());
        }
        inline app::VerletStructure_JointState__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure_JointState__Array>(get_class(), size);
        }
        inline app::VerletStructure_JointState__Array* create_array(const std::vector<app::VerletStructure_JointState*>& items) {
            return il2cpp::array_new<app::VerletStructure_JointState__Array>(get_class(), items);
        }
    } // namespace VerletStructure_JointState
} // namespace app::classes::types
