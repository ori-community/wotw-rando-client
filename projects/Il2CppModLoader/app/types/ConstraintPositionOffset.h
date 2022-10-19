#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintPositionOffset {
        namespace {
            inline app::ConstraintPositionOffset__Class* type_info_ref = nullptr;
        }
        inline app::ConstraintPositionOffset__Class** type_info = &type_info_ref;
        inline app::ConstraintPositionOffset__Class* get_class() {
            return il2cpp::get_class<app::ConstraintPositionOffset__Class>(type_info, "RootMotion.FinalIK", "ConstraintPositionOffset");
        }
        inline app::ConstraintPositionOffset* create() {
            return il2cpp::create_object<app::ConstraintPositionOffset>(get_class());
        }
    } // namespace ConstraintPositionOffset
} // namespace app::classes::types
