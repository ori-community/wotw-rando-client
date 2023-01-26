#pragma once
#include <Modloader/app/structs/IKSolverLimb_AxisDirection__Array.h>
#include <Modloader/app/structs/IKSolverLimb_AxisDirection__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverLimb_AxisDirection__Array {
        inline app::IKSolverLimb_AxisDirection__Array__Class** type_info() {
            static app::IKSolverLimb_AxisDirection__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverLimb_AxisDirection__Array__Class**)(modloader::win::memory::resolve_rva(0x0473C088));
            }
            return cache;
        }
        inline app::IKSolverLimb_AxisDirection__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLimb_AxisDirection__Array__Class>(type_info(), "RootMotion.FinalIK", "IKSolverLimb+AxisDirection[]");
        }
        inline app::IKSolverLimb_AxisDirection__Array* create() {
            return il2cpp::create_object<app::IKSolverLimb_AxisDirection__Array>(get_class());
        }
    } // namespace IKSolverLimb_AxisDirection__Array
} // namespace app::classes::types
