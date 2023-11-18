#pragma once
#include <Modloader/app/structs/ConstraintPosition.h>
#include <Modloader/app/structs/ConstraintPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintPosition {
        inline app::ConstraintPosition__Class** type_info() {
            static app::ConstraintPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstraintPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstraintPosition__Class* get_class() {
            return il2cpp::get_class<app::ConstraintPosition__Class>(type_info(), "RootMotion.FinalIK", "ConstraintPosition");
        }
        inline app::ConstraintPosition* create() {
            return il2cpp::create_object<app::ConstraintPosition>(get_class());
        }
    } // namespace ConstraintPosition
} // namespace app::classes::types
