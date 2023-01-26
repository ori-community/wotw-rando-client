#pragma once
#include <Modloader/app/structs/IKSolverHeuristic.h>
#include <Modloader/app/structs/IKSolverHeuristic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverHeuristic {
        inline app::IKSolverHeuristic__Class** type_info() {
            static app::IKSolverHeuristic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverHeuristic__Class**)(modloader::win::memory::resolve_rva(0x04741D88));
            }
            return cache;
        }
        inline app::IKSolverHeuristic__Class* get_class() {
            return il2cpp::get_class<app::IKSolverHeuristic__Class>(type_info(), "RootMotion.FinalIK", "IKSolverHeuristic");
        }
        inline app::IKSolverHeuristic* create() {
            return il2cpp::create_object<app::IKSolverHeuristic>(get_class());
        }
    } // namespace IKSolverHeuristic
} // namespace app::classes::types
