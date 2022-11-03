#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructure_JointState__Array {
        namespace {
            inline app::VerletStructure_JointState__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructure_JointState__Array__Class** type_info = &type_info_ref;
        inline app::VerletStructure_JointState__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure_JointState__Array__Class>(type_info, "", "VerletStructure+JointState[]");
        }
        inline app::VerletStructure_JointState__Array* create() {
            return il2cpp::create_object<app::VerletStructure_JointState__Array>(get_class());
        }
    } // namespace VerletStructure_JointState__Array
} // namespace app::classes::types
