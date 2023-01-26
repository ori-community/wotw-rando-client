#pragma once
#include <Modloader/app/structs/DataTable_RowDiffIdUsageSection.h>
#include <Modloader/app/structs/DataTable_RowDiffIdUsageSection__Boxed.h>
#include <Modloader/app/structs/DataTable_RowDiffIdUsageSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTable_RowDiffIdUsageSection {
        inline app::DataTable_RowDiffIdUsageSection__Class** type_info() {
            static app::DataTable_RowDiffIdUsageSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataTable_RowDiffIdUsageSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataTable_RowDiffIdUsageSection__Class* get_class() {
            return il2cpp::get_nested_class<app::DataTable_RowDiffIdUsageSection__Class>(type_info(), "System.Data", "DataTable", "RowDiffIdUsageSection");
        }
        inline app::DataTable_RowDiffIdUsageSection* create() {
            return il2cpp::create_object<app::DataTable_RowDiffIdUsageSection>(get_class());
        }
        inline app::DataTable_RowDiffIdUsageSection__Boxed* box(app::DataTable_RowDiffIdUsageSection value) {
            return il2cpp::box_value<app::DataTable_RowDiffIdUsageSection__Boxed>(get_class(), value);
        }
    } // namespace DataTable_RowDiffIdUsageSection
} // namespace app::classes::types
