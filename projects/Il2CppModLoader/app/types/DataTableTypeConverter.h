#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTableTypeConverter {
        namespace {
            app::DataTableTypeConverter__Class* type_info_ref = nullptr;
        }
        app::DataTableTypeConverter__Class** type_info = &type_info_ref;
        inline app::DataTableTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::DataTableTypeConverter__Class>(type_info, "System.Data", "DataTableTypeConverter");
        }
        inline app::DataTableTypeConverter* create() {
            return il2cpp::create_object<app::DataTableTypeConverter>(get_class());
        }
    } // namespace DataTableTypeConverter
} // namespace app::classes::types
