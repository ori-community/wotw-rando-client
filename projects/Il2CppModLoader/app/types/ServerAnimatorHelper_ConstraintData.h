#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_ConstraintData {
        namespace {
            app::ServerAnimatorHelper_ConstraintData__Class* type_info_ref = nullptr;
        }
        app::ServerAnimatorHelper_ConstraintData__Class** type_info = &type_info_ref;
        inline app::ServerAnimatorHelper_ConstraintData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerAnimatorHelper_ConstraintData__Class>(type_info, "", "ServerAnimatorHelper", "ConstraintData");
        }
        inline app::ServerAnimatorHelper_ConstraintData* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper_ConstraintData>(get_class());
        }
        inline app::ServerAnimatorHelper_ConstraintData__Boxed* box(app::ServerAnimatorHelper_ConstraintData value) {
            return il2cpp::box_value<app::ServerAnimatorHelper_ConstraintData__Boxed>(get_class(), value);
        }
    } // namespace ServerAnimatorHelper_ConstraintData
} // namespace app::classes::types
