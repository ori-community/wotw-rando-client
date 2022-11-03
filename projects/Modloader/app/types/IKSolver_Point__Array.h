#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolver_Point__Array {
        inline app::IKSolver_Point__Array__Class** type_info = (app::IKSolver_Point__Array__Class**)(modloader::win::memory::resolve_rva(0x04789940));
        inline app::IKSolver_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::IKSolver_Point__Array__Class>(type_info, "RootMotion.FinalIK", "IKSolver+Point[]");
        }
        inline app::IKSolver_Point__Array* create() {
            return il2cpp::create_object<app::IKSolver_Point__Array>(get_class());
        }
    } // namespace IKSolver_Point__Array
} // namespace app::classes::types
