#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataTable_RowDiffIdUsageSection {
        namespace {
            inline app::DataTable_RowDiffIdUsageSection__Class* type_info_ref = nullptr;
        }
        inline app::DataTable_RowDiffIdUsageSection__Class** type_info = &type_info_ref;
        inline app::DataTable_RowDiffIdUsageSection__Class* get_class() {
            return il2cpp::get_nested_class<app::DataTable_RowDiffIdUsageSection__Class>(type_info, "System.Data", "DataTable", "RowDiffIdUsageSection");
        }
        inline app::DataTable_RowDiffIdUsageSection* create() {
            return il2cpp::create_object<app::DataTable_RowDiffIdUsageSection>(get_class());
        }
        inline app::DataTable_RowDiffIdUsageSection__Boxed* box(app::DataTable_RowDiffIdUsageSection value) {
            return il2cpp::box_value<app::DataTable_RowDiffIdUsageSection__Boxed>(get_class(), value);
        }
    } // namespace DataTable_RowDiffIdUsageSection
} // namespace app::classes::types
