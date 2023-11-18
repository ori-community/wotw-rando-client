#pragma once
#include <Modloader/app/structs/ServerAnimatorHelper_ConstraintData.h>
#include <Modloader/app/structs/ServerAnimatorHelper_ConstraintData__Boxed.h>
#include <Modloader/app/structs/ServerAnimatorHelper_ConstraintData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_ConstraintData {
        inline app::ServerAnimatorHelper_ConstraintData__Class** type_info() {
            static app::ServerAnimatorHelper_ConstraintData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerAnimatorHelper_ConstraintData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerAnimatorHelper_ConstraintData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerAnimatorHelper_ConstraintData__Class>(type_info(), "", "ServerAnimatorHelper", "ConstraintData");
        }
        inline app::ServerAnimatorHelper_ConstraintData* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper_ConstraintData>(get_class());
        }
        inline app::ServerAnimatorHelper_ConstraintData__Boxed* box(app::ServerAnimatorHelper_ConstraintData value) {
            return il2cpp::box_value<app::ServerAnimatorHelper_ConstraintData__Boxed>(get_class(), value);
        }
    } // namespace ServerAnimatorHelper_ConstraintData
} // namespace app::classes::types
