#pragma once
#include <Modloader/app/structs/ConstraintEvaluator.h>
#include <Modloader/app/structs/ConstraintEvaluator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintEvaluator {
        inline app::ConstraintEvaluator__Class** type_info() {
            static app::ConstraintEvaluator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintEvaluator__Class**)(modloader::win::memory::resolve_rva(0x04793188));
            }
            return cache;
        }
        inline app::ConstraintEvaluator__Class* get_class() {
            return il2cpp::get_class<app::ConstraintEvaluator__Class>(type_info(), "Moon.Timeline.Constraints", "ConstraintEvaluator");
        }
        inline app::ConstraintEvaluator* create() {
            return il2cpp::create_object<app::ConstraintEvaluator>(get_class());
        }
    } // namespace ConstraintEvaluator
} // namespace app::classes::types
