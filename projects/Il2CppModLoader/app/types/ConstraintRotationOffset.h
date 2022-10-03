#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintRotationOffset {
        namespace {
            app::ConstraintRotationOffset__Class* type_info_ref = nullptr;
        }
        app::ConstraintRotationOffset__Class** type_info = &type_info_ref;
        inline app::ConstraintRotationOffset__Class* get_class() {
            return il2cpp::get_class<app::ConstraintRotationOffset__Class>(type_info, "RootMotion.FinalIK", "ConstraintRotationOffset");
        }
        inline app::ConstraintRotationOffset* create() {
            return il2cpp::create_object<app::ConstraintRotationOffset>(get_class());
        }
    } // namespace ConstraintRotationOffset
} // namespace app::classes::types
