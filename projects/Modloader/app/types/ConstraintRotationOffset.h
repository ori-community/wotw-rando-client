#pragma once
#include <Modloader/app/structs/ConstraintRotationOffset.h>
#include <Modloader/app/structs/ConstraintRotationOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintRotationOffset {
        inline app::ConstraintRotationOffset__Class** type_info() {
            static app::ConstraintRotationOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstraintRotationOffset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstraintRotationOffset__Class* get_class() {
            return il2cpp::get_class<app::ConstraintRotationOffset__Class>(type_info(), "RootMotion.FinalIK", "ConstraintRotationOffset");
        }
        inline app::ConstraintRotationOffset* create() {
            return il2cpp::create_object<app::ConstraintRotationOffset>(get_class());
        }
    } // namespace ConstraintRotationOffset
} // namespace app::classes::types
