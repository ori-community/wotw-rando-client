#pragma once
#include <Modloader/app/structs/SolverManager.h>
#include <Modloader/app/structs/SolverManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SolverManager {
        inline app::SolverManager__Class** type_info() {
            static app::SolverManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SolverManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SolverManager__Class* get_class() {
            return il2cpp::get_class<app::SolverManager__Class>(type_info(), "RootMotion", "SolverManager");
        }
        inline app::SolverManager* create() {
            return il2cpp::create_object<app::SolverManager>(get_class());
        }
    } // namespace SolverManager
} // namespace app::classes::types
