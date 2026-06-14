#pragma once
#include <Modloader/app/structs/WotwUberStateToWwiseData_AbilityRequirementCondition__Array.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_AbilityRequirementCondition__Array {
        inline app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class** type_info() {
            static app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class>(type_info(), "", "WotwUberStateToWwiseData+AbilityRequirementCondition[]");
        }
        inline app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array>(get_class());
        }
    } // namespace WotwUberStateToWwiseData_AbilityRequirementCondition__Array
} // namespace app::classes::types
