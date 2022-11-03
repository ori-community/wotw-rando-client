#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverFullBodyBiped {
        inline app::IKSolverFullBodyBiped__Class** type_info = (app::IKSolverFullBodyBiped__Class**)(modloader::win::memory::resolve_rva(0x0475E1F8));
        inline app::IKSolverFullBodyBiped__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFullBodyBiped__Class>(type_info, "RootMotion.FinalIK", "IKSolverFullBodyBiped");
        }
        inline app::IKSolverFullBodyBiped* create() {
            return il2cpp::create_object<app::IKSolverFullBodyBiped>(get_class());
        }
    } // namespace IKSolverFullBodyBiped
} // namespace app::classes::types
