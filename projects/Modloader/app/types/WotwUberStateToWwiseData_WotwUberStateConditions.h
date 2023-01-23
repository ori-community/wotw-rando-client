#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_WotwUberStateConditions__Class.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_WotwUberStateConditions.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_WotwUberStateConditions {
        namespace {
            inline app::WotwUberStateToWwiseData_WotwUberStateConditions__Class* type_info_ref = nullptr;
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions__Class** type_info = &type_info_ref;
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwUberStateToWwiseData_WotwUberStateConditions__Class>(type_info, "", "WotwUberStateToWwiseData", "WotwUberStateConditions");
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateConditions* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_WotwUberStateConditions>(get_class());
        }
    } // namespace WotwUberStateToWwiseData_WotwUberStateConditions
} // namespace app::classes::types
