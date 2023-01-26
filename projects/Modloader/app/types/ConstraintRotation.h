#pragma once
#include <Modloader/app/structs/ConstraintRotation.h>
#include <Modloader/app/structs/ConstraintRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintRotation {
        inline app::ConstraintRotation__Class** type_info() {
            static app::ConstraintRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstraintRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstraintRotation__Class* get_class() {
            return il2cpp::get_class<app::ConstraintRotation__Class>(type_info(), "RootMotion.FinalIK", "ConstraintRotation");
        }
        inline app::ConstraintRotation* create() {
            return il2cpp::create_object<app::ConstraintRotation>(get_class());
        }
    } // namespace ConstraintRotation
} // namespace app::classes::types
