#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKSolverTrigonometric_TrigonometricBone__Class.h>
#include <Modloader/app/structs/IKSolverTrigonometric_TrigonometricBone.h>

namespace app::classes::types {
    namespace IKSolverTrigonometric_TrigonometricBone {
        inline app::IKSolverTrigonometric_TrigonometricBone__Class** type_info = (app::IKSolverTrigonometric_TrigonometricBone__Class**)(modloader::win::memory::resolve_rva(0x04738DC0));
        inline app::IKSolverTrigonometric_TrigonometricBone__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolverTrigonometric_TrigonometricBone__Class>(type_info, "RootMotion.FinalIK", "IKSolverTrigonometric", "TrigonometricBone");
        }
        inline app::IKSolverTrigonometric_TrigonometricBone* create() {
            return il2cpp::create_object<app::IKSolverTrigonometric_TrigonometricBone>(get_class());
        }
    } // namespace IKSolverTrigonometric_TrigonometricBone
} // namespace app::classes::types
