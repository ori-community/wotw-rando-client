#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverLimb_AxisDirection__Array {
        inline app::IKSolverLimb_AxisDirection__Array__Class** type_info = (app::IKSolverLimb_AxisDirection__Array__Class**)(modloader::win::memory::resolve_rva(0x0473C088));
        inline app::IKSolverLimb_AxisDirection__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLimb_AxisDirection__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolverLimb+AxisDirection[]");
        }
        inline app::IKSolverLimb_AxisDirection__Array* create() {
            return il2cpp::create_object<app::IKSolverLimb_AxisDirection__Array>(get_class());
        }
    } // namespace IKSolverLimb_AxisDirection__Array
} // namespace app::classes::types
