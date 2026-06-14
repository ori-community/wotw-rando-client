#pragma once
#include <Modloader/app/structs/IKSolver_UpdateDelegate.h>
#include <Modloader/app/structs/IKSolver_UpdateDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolver_UpdateDelegate {
        inline app::IKSolver_UpdateDelegate__Class** type_info() {
            static app::IKSolver_UpdateDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolver_UpdateDelegate__Class**)(modloader::win::memory::resolve_rva(0x04701310));
            }
            return cache;
        }
        inline app::IKSolver_UpdateDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::IKSolver_UpdateDelegate__Class>(type_info(), "RootMotion.FinalIK", "IKSolver", "UpdateDelegate");
        }
        inline app::IKSolver_UpdateDelegate* create() {
            return il2cpp::create_object<app::IKSolver_UpdateDelegate>(get_class());
        }
    } // namespace IKSolver_UpdateDelegate
} // namespace app::classes::types
