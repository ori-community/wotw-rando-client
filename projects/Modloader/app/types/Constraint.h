#pragma once
#include <Modloader/app/structs/Constraint.h>
#include <Modloader/app/structs/Constraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Constraint {
        inline app::Constraint__Class** type_info() {
            static app::Constraint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Constraint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Constraint__Class* get_class() {
            return il2cpp::get_class<app::Constraint__Class>(type_info(), "RootMotion.FinalIK", "Constraint");
        }
        inline app::Constraint* create() {
            return il2cpp::create_object<app::Constraint>(get_class());
        }
    } // namespace Constraint
} // namespace app::classes::types
