#pragma once
#include <Modloader/app/structs/WotwUberStateToWwiseData_WotwUberStateConditions.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_WotwUberStateConditions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_WotwUberStateConditions {
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions__Class** type_info() {
            static app::WotwUberStateToWwiseData_WotwUberStateConditions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WotwUberStateToWwiseData_WotwUberStateConditions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwUberStateToWwiseData_WotwUberStateConditions__Class>(type_info(), "", "WotwUberStateToWwiseData", "WotwUberStateConditions");
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_WotwUberStateConditions>(get_class());
        }
    } // namespace WotwUberStateToWwiseData_WotwUberStateConditions
} // namespace app::classes::types
