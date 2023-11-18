#pragma once
#include <Modloader/app/structs/VerletStructure_JointState.h>
#include <Modloader/app/structs/VerletStructure_JointState__Array.h>
#include <Modloader/app/structs/VerletStructure_JointState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_JointState {
        inline app::VerletStructure_JointState__Class** type_info() {
            static app::VerletStructure_JointState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_JointState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_JointState__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_JointState__Class>(type_info(), "", "VerletStructure", "JointState");
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
