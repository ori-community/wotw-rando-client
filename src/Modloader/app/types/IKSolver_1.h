#pragma once
#include <Modloader/app/structs/IKSolver_1.h>
#include <Modloader/app/structs/IKSolver_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKSolver_1 {
        inline app::IKSolver_1__Class** type_info() {
            static app::IKSolver_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKSolver_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKSolver_1__Class* get_class() {
            return il2cpp::get_class<app::IKSolver_1__Class>(type_info(), "", "IKSolver");
        }
        inline app::IKSolver_1* create() {
            return il2cpp::create_object<app::IKSolver_1>(get_class());
        }
    } // namespace IKSolver_1
} // namespace app::classes::types
