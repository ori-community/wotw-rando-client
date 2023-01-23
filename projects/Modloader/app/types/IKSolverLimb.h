#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKSolverLimb__Class.h>
#include <Modloader/app/structs/IKSolverLimb.h>
#include <Modloader/app/structs/IKSolverLimb__Array.h>

namespace app::classes::types {
    namespace IKSolverLimb {
        inline app::IKSolverLimb__Class** type_info = (app::IKSolverLimb__Class**)(modloader::win::memory::resolve_rva(0x0470CA00));
        inline app::IKSolverLimb__Class* get_class() {
            return il2cpp::get_class<app::IKSolverLimb__Class>(type_info, "RootMotion.FinalIK", "IKSolverLimb");
        }
        inline app::IKSolverLimb* create() {
            return il2cpp::create_object<app::IKSolverLimb>(get_class());
        }
        inline app::IKSolverLimb__Array* create_array(int size) {
            return il2cpp::array_new<app::IKSolverLimb__Array>(get_class(), size);
        }
        inline app::IKSolverLimb__Array* create_array(const std::vector<app::IKSolverLimb*>& items) {
            return il2cpp::array_new<app::IKSolverLimb__Array>(get_class(), items);
        }
    } // namespace IKSolverLimb
} // namespace app::classes::types
