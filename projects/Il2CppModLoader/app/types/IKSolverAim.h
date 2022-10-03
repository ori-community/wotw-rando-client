#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverAim {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverAim__Class** type_info;
        inline app::IKSolverAim__Class* get_class() {
            return il2cpp::get_class<app::IKSolverAim__Class>(type_info, "RootMotion.FinalIK", "IKSolverAim");
        }
        inline app::IKSolverAim* create() {
            return il2cpp::create_object<app::IKSolverAim>(get_class());
        }
    } // namespace IKSolverAim
} // namespace app::classes::types
