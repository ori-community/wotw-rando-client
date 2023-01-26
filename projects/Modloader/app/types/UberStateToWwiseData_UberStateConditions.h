#pragma once
#include <Modloader/app/structs/UberStateToWwiseData_UberStateConditions.h>
#include <Modloader/app/structs/UberStateToWwiseData_UberStateConditions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_UberStateConditions {
        inline app::UberStateToWwiseData_UberStateConditions__Class** type_info() {
            static app::UberStateToWwiseData_UberStateConditions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateToWwiseData_UberStateConditions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateToWwiseData_UberStateConditions__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateToWwiseData_UberStateConditions__Class>(type_info(), "Moon.Wwise", "UberStateToWwiseData", "UberStateConditions");
        }
        inline app::UberStateToWwiseData_UberStateConditions* create() {
            return il2cpp::create_object<app::UberStateToWwiseData_UberStateConditions>(get_class());
        }
    } // namespace UberStateToWwiseData_UberStateConditions
} // namespace app::classes::types
