#pragma once
#include <Modloader/app/structs/IKSolverTrigonometric_TrigonometricBone.h>
#include <Modloader/app/structs/IKSolverTrigonometric_TrigonometricBone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverTrigonometric_TrigonometricBone {
        inline app::IKSolverTrigonometric_TrigonometricBone__Class** type_info() {
            static app::IKSolverTrigonometric_TrigonometricBone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverTrigonometric_TrigonometricBone__Class**)(modloader::win::memory::resolve_rva(0x04738DC0));
            }
            return cache;
        }
        inline app::IKSolverTrigonometric_TrigonometricBone__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverTrigonometric_TrigonometricBone__Class>(type_info(), "RootMotion.FinalIK", "IKSolverTrigonometric", "TrigonometricBone");
        }
        inline app::IKSolverTrigonometric_TrigonometricBone* create() {
            return il2cpp::create_object<app::IKSolverTrigonometric_TrigonometricBone>(get_class());
        }
    } // namespace IKSolverTrigonometric_TrigonometricBone
} // namespace app::classes::types
