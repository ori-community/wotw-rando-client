#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IkChainSolver {
        inline app::IkChainSolver__Class** type_info = (app::IkChainSolver__Class**)(modloader::win::memory::resolve_rva(0x04747410));
        inline app::IkChainSolver__Class* get_class() {
            return il2cpp::get_class<app::IkChainSolver__Class>(type_info, "Moon", "IkChainSolver");
        }
        inline app::IkChainSolver* create() {
            return il2cpp::create_object<app::IkChainSolver>(get_class());
        }
    } // namespace IkChainSolver
} // namespace app::classes::types
