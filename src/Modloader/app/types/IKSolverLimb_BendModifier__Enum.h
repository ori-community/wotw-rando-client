#pragma once
#include <Modloader/app/structs/IKSolverLimb_BendModifier__Enum.h>
#include <Modloader/app/structs/IKSolverLimb_BendModifier__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb_BendModifier__Enum {
        inline app::IKSolverLimb_BendModifier__Enum__Class** type_info() {
            static app::IKSolverLimb_BendModifier__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKSolverLimb_BendModifier__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKSolverLimb_BendModifier__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverLimb_BendModifier__Enum__Class>(type_info(), "RootMotion.FinalIK", "IKSolverLimb", "BendModifier");
        }
        inline app::IKSolverLimb_BendModifier__Enum* create() {
            return il2cpp::create_object<app::IKSolverLimb_BendModifier__Enum>(get_class());
        }
    } // namespace IKSolverLimb_BendModifier__Enum
} // namespace app::classes::types
