#pragma once
#include <Modloader/app/structs/DataTableTypeConverter.h>
#include <Modloader/app/structs/DataTableTypeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTableTypeConverter {
        inline app::DataTableTypeConverter__Class** type_info() {
            static app::DataTableTypeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataTableTypeConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataTableTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::DataTableTypeConverter__Class>(type_info(), "System.Data", "DataTableTypeConverter");
        }
        inline app::DataTableTypeConverter* create() {
            return il2cpp::create_object<app::DataTableTypeConverter>(get_class());
        }
    } // namespace DataTableTypeConverter
} // namespace app::classes::types
