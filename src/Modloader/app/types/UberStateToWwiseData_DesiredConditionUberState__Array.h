#pragma once
#include <Modloader/app/structs/UberStateToWwiseData_DesiredConditionUberState__Array.h>
#include <Modloader/app/structs/UberStateToWwiseData_DesiredConditionUberState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_DesiredConditionUberState__Array {
        inline app::UberStateToWwiseData_DesiredConditionUberState__Array__Class** type_info() {
            static app::UberStateToWwiseData_DesiredConditionUberState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateToWwiseData_DesiredConditionUberState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateToWwiseData_DesiredConditionUberState__Array__Class>(type_info(), "Moon.Wwise", "UberStateToWwiseData+DesiredConditionUberState[]");
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState__Array* create() {
            return il2cpp::create_object<app::UberStateToWwiseData_DesiredConditionUberState__Array>(get_class());
        }
    } // namespace UberStateToWwiseData_DesiredConditionUberState__Array
} // namespace app::classes::types
