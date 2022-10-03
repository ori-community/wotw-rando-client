#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_DesiredConditionUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateToWwiseData_DesiredConditionUberState__Class** type_info;
        inline app::UberStateToWwiseData_DesiredConditionUberState__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateToWwiseData_DesiredConditionUberState__Class>(type_info, "Moon.Wwise", "UberStateToWwiseData", "DesiredConditionUberState");
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState* create() {
            return il2cpp::create_object<app::UberStateToWwiseData_DesiredConditionUberState>(get_class());
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateToWwiseData_DesiredConditionUberState__Array>(get_class(), size);
        }
    } // namespace UberStateToWwiseData_DesiredConditionUberState
} // namespace app::classes::types
