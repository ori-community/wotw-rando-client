#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BipedIKSolvers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BipedIKSolvers__Class** type_info;
        inline app::BipedIKSolvers__Class* get_class() {
            return il2cpp::get_class<app::BipedIKSolvers__Class>(type_info, "RootMotion.FinalIK", "BipedIKSolvers");
        }
        inline app::BipedIKSolvers* create() {
            return il2cpp::create_object<app::BipedIKSolvers>(get_class());
        }
    } // namespace BipedIKSolvers
} // namespace app::classes::types
