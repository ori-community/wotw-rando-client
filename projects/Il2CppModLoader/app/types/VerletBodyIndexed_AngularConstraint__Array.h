#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_AngularConstraint__Array {
        inline app::VerletBodyIndexed_AngularConstraint__Array__Class** type_info = (app::VerletBodyIndexed_AngularConstraint__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E978));
        inline app::VerletBodyIndexed_AngularConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed_AngularConstraint__Array__Class>(type_info, "Moon", "VerletBodyIndexed+AngularConstraint[]");
        }
        inline app::VerletBodyIndexed_AngularConstraint__Array* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_AngularConstraint__Array>(get_class());
        }
    } // namespace VerletBodyIndexed_AngularConstraint__Array
} // namespace app::classes::types
