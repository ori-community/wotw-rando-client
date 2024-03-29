#pragma once
#include <Modloader/app/structs/ProbabilityCondition.h>
#include <Modloader/app/structs/ProbabilityCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProbabilityCondition {
        inline app::ProbabilityCondition__Class** type_info() {
            static app::ProbabilityCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProbabilityCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProbabilityCondition__Class* get_class() {
            return il2cpp::get_class<app::ProbabilityCondition__Class>(type_info(), "Moon.BehaviourSystem", "ProbabilityCondition");
        }
        inline app::ProbabilityCondition* create() {
            return il2cpp::create_object<app::ProbabilityCondition>(get_class());
        }
    } // namespace ProbabilityCondition
} // namespace app::classes::types
