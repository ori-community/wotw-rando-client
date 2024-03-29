#pragma once
#include <Modloader/app/structs/IKSolverFABRIKRoot.h>
#include <Modloader/app/structs/IKSolverFABRIKRoot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverFABRIKRoot {
        inline app::IKSolverFABRIKRoot__Class** type_info() {
            static app::IKSolverFABRIKRoot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKSolverFABRIKRoot__Class**)(modloader::win::memory::resolve_rva(0x047237C0));
            }
            return cache;
        }
        inline app::IKSolverFABRIKRoot__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFABRIKRoot__Class>(type_info(), "RootMotion.FinalIK", "IKSolverFABRIKRoot");
        }
        inline app::IKSolverFABRIKRoot* create() {
            return il2cpp::create_object<app::IKSolverFABRIKRoot>(get_class());
        }
    } // namespace IKSolverFABRIKRoot
} // namespace app::classes::types
