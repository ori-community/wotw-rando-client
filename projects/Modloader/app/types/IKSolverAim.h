#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverAim {
        inline app::IKSolverAim__Class** type_info = (app::IKSolverAim__Class**)(modloader::win::memory::resolve_rva(0x04754700));
        inline app::IKSolverAim__Class* get_class() {
            return il2cpp::get_class<app::IKSolverAim__Class>(type_info, "RootMotion.FinalIK", "IKSolverAim");
        }
        inline app::IKSolverAim* create() {
            return il2cpp::create_object<app::IKSolverAim>(get_class());
        }
    } // namespace IKSolverAim
} // namespace app::classes::types
