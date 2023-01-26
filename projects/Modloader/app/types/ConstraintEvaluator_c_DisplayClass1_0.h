#pragma once
#include <Modloader/app/structs/ConstraintEvaluator_c_DisplayClass1_0.h>
#include <Modloader/app/structs/ConstraintEvaluator_c_DisplayClass1_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintEvaluator_c_DisplayClass1_0 {
        inline app::ConstraintEvaluator_c_DisplayClass1_0__Class** type_info() {
            static app::ConstraintEvaluator_c_DisplayClass1_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintEvaluator_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x047767F0));
            }
            return cache;
        }
        inline app::ConstraintEvaluator_c_DisplayClass1_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ConstraintEvaluator_c_DisplayClass1_0__Class>(type_info(), "Moon.Timeline.Constraints", "ConstraintEvaluator", "<>c__DisplayClass1_0");
        }
        inline app::ConstraintEvaluator_c_DisplayClass1_0* create() {
            return il2cpp::create_object<app::ConstraintEvaluator_c_DisplayClass1_0>(get_class());
        }
    } // namespace ConstraintEvaluator_c_DisplayClass1_0
} // namespace app::classes::types
