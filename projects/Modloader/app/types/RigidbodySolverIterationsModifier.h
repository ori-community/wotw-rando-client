#pragma once
#include <Modloader/app/structs/RigidbodySolverIterationsModifier.h>
#include <Modloader/app/structs/RigidbodySolverIterationsModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodySolverIterationsModifier {
        inline app::RigidbodySolverIterationsModifier__Class** type_info() {
            static app::RigidbodySolverIterationsModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodySolverIterationsModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodySolverIterationsModifier__Class* get_class() {
            return il2cpp::get_class<app::RigidbodySolverIterationsModifier__Class>(type_info(), "", "RigidbodySolverIterationsModifier");
        }
        inline app::RigidbodySolverIterationsModifier* create() {
            return il2cpp::create_object<app::RigidbodySolverIterationsModifier>(get_class());
        }
    } // namespace RigidbodySolverIterationsModifier
} // namespace app::classes::types
