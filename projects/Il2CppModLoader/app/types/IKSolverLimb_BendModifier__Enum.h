#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb_BendModifier__Enum {
        namespace {
            app::IKSolverLimb_BendModifier__Enum__Class* type_info_ref = nullptr;
        }
        app::IKSolverLimb_BendModifier__Enum__Class** type_info = &type_info_ref;
        inline app::IKSolverLimb_BendModifier__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverLimb_BendModifier__Enum__Class>(type_info, "RootMotion.FinalIK", "IKSolverLimb", "BendModifier");
        }
        inline app::IKSolverLimb_BendModifier__Enum* create() {
            return il2cpp::create_object<app::IKSolverLimb_BendModifier__Enum>(get_class());
        }
    } // namespace IKSolverLimb_BendModifier__Enum
} // namespace app::classes::types
