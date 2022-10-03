#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintEvaluator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstraintEvaluator__Class** type_info;
        inline app::ConstraintEvaluator__Class* get_class() {
            return il2cpp::get_class<app::ConstraintEvaluator__Class>(type_info, "Moon.Timeline.Constraints", "ConstraintEvaluator");
        }
        inline app::ConstraintEvaluator* create() {
            return il2cpp::create_object<app::ConstraintEvaluator>(get_class());
        }
    } // namespace ConstraintEvaluator
} // namespace app::classes::types
