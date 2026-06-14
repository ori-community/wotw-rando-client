#pragma once
#include <Modloader/app/structs/ConstraintPositionOffset.h>
#include <Modloader/app/structs/ConstraintPositionOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintPositionOffset {
        inline app::ConstraintPositionOffset__Class** type_info() {
            static app::ConstraintPositionOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstraintPositionOffset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstraintPositionOffset__Class* get_class() {
            return il2cpp::get_class<app::ConstraintPositionOffset__Class>(type_info(), "RootMotion.FinalIK", "ConstraintPositionOffset");
        }
        inline app::ConstraintPositionOffset* create() {
            return il2cpp::create_object<app::ConstraintPositionOffset>(get_class());
        }
    } // namespace ConstraintPositionOffset
} // namespace app::classes::types
