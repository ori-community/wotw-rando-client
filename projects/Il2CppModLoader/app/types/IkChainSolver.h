#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IkChainSolver__Class** type_info;
        inline app::IkChainSolver__Class* get_class() {
            return il2cpp::get_class<app::IkChainSolver__Class>(type_info, "Moon", "IkChainSolver");
        }
        inline app::IkChainSolver* create() {
            return il2cpp::create_object<app::IkChainSolver>(get_class());
        }
    } // namespace IkChainSolver
} // namespace app::classes::types
