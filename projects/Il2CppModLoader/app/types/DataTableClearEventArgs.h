#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTableClearEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataTableClearEventArgs__Class** type_info;
        inline app::DataTableClearEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataTableClearEventArgs__Class>(type_info, "System.Data", "DataTableClearEventArgs");
        }
        inline app::DataTableClearEventArgs* create() {
            return il2cpp::create_object<app::DataTableClearEventArgs>(get_class());
        }
    } // namespace DataTableClearEventArgs
} // namespace app::classes::types
