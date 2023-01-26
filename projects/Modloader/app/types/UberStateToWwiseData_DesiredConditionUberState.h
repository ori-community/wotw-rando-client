#pragma once
#include <Modloader/app/structs/UberStateToWwiseData_DesiredConditionUberState.h>
#include <Modloader/app/structs/UberStateToWwiseData_DesiredConditionUberState__Array.h>
#include <Modloader/app/structs/UberStateToWwiseData_DesiredConditionUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_DesiredConditionUberState {
        inline app::UberStateToWwiseData_DesiredConditionUberState__Class** type_info() {
            static app::UberStateToWwiseData_DesiredConditionUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateToWwiseData_DesiredConditionUberState__Class**)(modloader::win::memory::resolve_rva(0x04747FB0));
            }
            return cache;
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateToWwiseData_DesiredConditionUberState__Class>(type_info(), "Moon.Wwise", "UberStateToWwiseData", "DesiredConditionUberState");
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState* create() {
            return il2cpp::create_object<app::UberStateToWwiseData_DesiredConditionUberState>(get_class());
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateToWwiseData_DesiredConditionUberState__Array>(get_class(), size);
        }
        inline app::UberStateToWwiseData_DesiredConditionUberState__Array* create_array(const std::vector<app::UberStateToWwiseData_DesiredConditionUberState*>& items) {
            return il2cpp::array_new<app::UberStateToWwiseData_DesiredConditionUberState__Array>(get_class(), items);
        }
    } // namespace UberStateToWwiseData_DesiredConditionUberState
} // namespace app::classes::types
