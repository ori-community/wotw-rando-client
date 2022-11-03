#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProbabilityCondition {
        namespace {
            inline app::ProbabilityCondition__Class* type_info_ref = nullptr;
        }
        inline app::ProbabilityCondition__Class** type_info = &type_info_ref;
        inline app::ProbabilityCondition__Class* get_class() {
            return il2cpp::get_class<app::ProbabilityCondition__Class>(type_info, "Moon.BehaviourSystem", "ProbabilityCondition");
        }
        inline app::ProbabilityCondition* create() {
            return il2cpp::create_object<app::ProbabilityCondition>(get_class());
        }
    } // namespace ProbabilityCondition
} // namespace app::classes::types
