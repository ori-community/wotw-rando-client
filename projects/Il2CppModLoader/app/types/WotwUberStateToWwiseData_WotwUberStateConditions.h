#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_WotwUberStateConditions {
        namespace {
            app::WotwUberStateToWwiseData_WotwUberStateConditions__Class* type_info_ref = nullptr;
        }
        app::WotwUberStateToWwiseData_WotwUberStateConditions__Class** type_info = &type_info_ref;
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwUberStateToWwiseData_WotwUberStateConditions__Class>(type_info, "", "WotwUberStateToWwiseData", "WotwUberStateConditions");
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_WotwUberStateConditions>(get_class());
        }
    } // namespace WotwUberStateToWwiseData_WotwUberStateConditions
} // namespace app::classes::types
