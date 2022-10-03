#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColumnTypeConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColumnTypeConverter__Class** type_info;
        inline app::ColumnTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::ColumnTypeConverter__Class>(type_info, "System.Data", "ColumnTypeConverter");
        }
        inline app::ColumnTypeConverter* create() {
            return il2cpp::create_object<app::ColumnTypeConverter>(get_class());
        }
    } // namespace ColumnTypeConverter
} // namespace app::classes::types
