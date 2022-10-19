#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_UberStateConditions {
        namespace {
            inline app::UberStateToWwiseData_UberStateConditions__Class* type_info_ref = nullptr;
        }
        inline app::UberStateToWwiseData_UberStateConditions__Class** type_info = &type_info_ref;
        inline app::UberStateToWwiseData_UberStateConditions__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateToWwiseData_UberStateConditions__Class>(type_info, "Moon.Wwise", "UberStateToWwiseData", "UberStateConditions");
        }
        inline app::UberStateToWwiseData_UberStateConditions* create() {
            return il2cpp::create_object<app::UberStateToWwiseData_UberStateConditions>(get_class());
        }
    } // namespace UberStateToWwiseData_UberStateConditions
} // namespace app::classes::types
