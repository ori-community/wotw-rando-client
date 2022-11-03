#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataTableTypeConverter {
        namespace {
            inline app::DataTableTypeConverter__Class* type_info_ref = nullptr;
        }
        inline app::DataTableTypeConverter__Class** type_info = &type_info_ref;
        inline app::DataTableTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::DataTableTypeConverter__Class>(type_info, "System.Data", "DataTableTypeConverter");
        }
        inline app::DataTableTypeConverter* create() {
            return il2cpp::create_object<app::DataTableTypeConverter>(get_class());
        }
    } // namespace DataTableTypeConverter
} // namespace app::classes::types
