#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_AbilityRequirementCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WotwUberStateToWwiseData_AbilityRequirementCondition__Class** type_info;
        inline app::WotwUberStateToWwiseData_AbilityRequirementCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwUberStateToWwiseData_AbilityRequirementCondition__Class>(type_info, "", "WotwUberStateToWwiseData", "AbilityRequirementCondition");
        }
        inline app::WotwUberStateToWwiseData_AbilityRequirementCondition* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_AbilityRequirementCondition>(get_class());
        }
        inline app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array>(get_class(), size);
        }
        inline app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array* create_array(const std::vector<app::WotwUberStateToWwiseData_AbilityRequirementCondition*>& items) {
            return il2cpp::array_new<app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array>(get_class(), items);
        }
    } // namespace WotwUberStateToWwiseData_AbilityRequirementCondition
} // namespace app::classes::types
