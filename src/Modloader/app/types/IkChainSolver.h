#pragma once
#include <Modloader/app/structs/IkChainSolver.h>
#include <Modloader/app/structs/IkChainSolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IkChainSolver {
        inline app::IkChainSolver__Class** type_info() {
            static app::IkChainSolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IkChainSolver__Class**)(modloader::win::memory::resolve_rva(0x04747410));
            }
            return cache;
        }
        inline app::IkChainSolver__Class* get_class() {
            return il2cpp::get_class<app::IkChainSolver__Class>(type_info(), "Moon", "IkChainSolver");
        }
        inline app::IkChainSolver* create() {
            return il2cpp::create_object<app::IkChainSolver>(get_class());
        }
    } // namespace IkChainSolver
} // namespace app::classes::types
