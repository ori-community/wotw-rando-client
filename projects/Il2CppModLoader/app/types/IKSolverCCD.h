#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKSolverCCD {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKSolverCCD__Class** type_info;
        inline app::IKSolverCCD__Class* get_class() {
            return il2cpp::get_class<app::IKSolverCCD__Class>(type_info, "RootMotion.FinalIK", "IKSolverCCD");
        }
        inline app::IKSolverCCD* create() {
            return il2cpp::create_object<app::IKSolverCCD>(get_class());
        }
    } // namespace IKSolverCCD
} // namespace app::classes::types
