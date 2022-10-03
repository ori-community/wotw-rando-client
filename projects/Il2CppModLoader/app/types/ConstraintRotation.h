#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintRotation {
        namespace {
            app::ConstraintRotation__Class* type_info_ref = nullptr;
        }
        app::ConstraintRotation__Class** type_info = &type_info_ref;
        inline app::ConstraintRotation__Class* get_class() {
            return il2cpp::get_class<app::ConstraintRotation__Class>(type_info, "RootMotion.FinalIK", "ConstraintRotation");
        }
        inline app::ConstraintRotation* create() {
            return il2cpp::create_object<app::ConstraintRotation>(get_class());
        }
    } // namespace ConstraintRotation
} // namespace app::classes::types
