#pragma once
#include <Modloader/app/structs/IKSolverFullBody.h>
#include <Modloader/app/structs/IKSolverFullBody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolverFullBody {
        inline app::IKSolverFullBody__Class** type_info() {
            static app::IKSolverFullBody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKSolverFullBody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKSolverFullBody__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFullBody__Class>(type_info(), "RootMotion.FinalIK", "IKSolverFullBody");
        }
        inline app::IKSolverFullBody* create() {
            return il2cpp::create_object<app::IKSolverFullBody>(get_class());
        }
    } // namespace IKSolverFullBody
} // namespace app::classes::types
