#pragma once
#include <Modloader/app/structs/DataTable_DSRowDiffIdUsageSection.h>
#include <Modloader/app/structs/DataTable_DSRowDiffIdUsageSection__Boxed.h>
#include <Modloader/app/structs/DataTable_DSRowDiffIdUsageSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTable_DSRowDiffIdUsageSection {
        inline app::DataTable_DSRowDiffIdUsageSection__Class** type_info() {
            static app::DataTable_DSRowDiffIdUsageSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataTable_DSRowDiffIdUsageSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataTable_DSRowDiffIdUsageSection__Class* get_class() {
            return il2cpp::get_nested_class<app::DataTable_DSRowDiffIdUsageSection__Class>(type_info(), "System.Data", "DataTable", "DSRowDiffIdUsageSection");
        }
        inline app::DataTable_DSRowDiffIdUsageSection* create() {
            return il2cpp::create_object<app::DataTable_DSRowDiffIdUsageSection>(get_class());
        }
        inline app::DataTable_DSRowDiffIdUsageSection__Boxed* box(app::DataTable_DSRowDiffIdUsageSection value) {
            return il2cpp::box_value<app::DataTable_DSRowDiffIdUsageSection__Boxed>(get_class(), value);
        }
    } // namespace DataTable_DSRowDiffIdUsageSection
} // namespace app::classes::types
