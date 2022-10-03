#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintPositionOffset {
        namespace {
            app::ConstraintPositionOffset__Class* type_info_ref = nullptr;
        }
        app::ConstraintPositionOffset__Class** type_info = &type_info_ref;
        inline app::ConstraintPositionOffset__Class* get_class() {
            return il2cpp::get_class<app::ConstraintPositionOffset__Class>(type_info, "RootMotion.FinalIK", "ConstraintPositionOffset");
        }
        inline app::ConstraintPositionOffset* create() {
            return il2cpp::create_object<app::ConstraintPositionOffset>(get_class());
        }
    } // namespace ConstraintPositionOffset
} // namespace app::classes::types
