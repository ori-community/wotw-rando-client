#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_AngularConstraint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletBodyIndexed_AngularConstraint__Array__Class** type_info;
        inline app::VerletBodyIndexed_AngularConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed_AngularConstraint__Array__Class>(type_info, "Moon", "VerletBodyIndexed+AngularConstraint[]");
        }
        inline app::VerletBodyIndexed_AngularConstraint__Array* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_AngularConstraint__Array>(get_class());
        }
    } // namespace VerletBodyIndexed_AngularConstraint__Array
} // namespace app::classes::types
