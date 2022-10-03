#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SolverManager {
        namespace {
            app::SolverManager__Class* type_info_ref = nullptr;
        }
        app::SolverManager__Class** type_info = &type_info_ref;
        inline app::SolverManager__Class* get_class() {
            return il2cpp::get_class<app::SolverManager__Class>(type_info, "RootMotion", "SolverManager");
        }
        inline app::SolverManager* create() {
            return il2cpp::create_object<app::SolverManager>(get_class());
        }
    } // namespace SolverManager
} // namespace app::classes::types
