#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTableNewRowEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataTableNewRowEventArgs__Class** type_info;
        inline app::DataTableNewRowEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataTableNewRowEventArgs__Class>(type_info, "System.Data", "DataTableNewRowEventArgs");
        }
        inline app::DataTableNewRowEventArgs* create() {
            return il2cpp::create_object<app::DataTableNewRowEventArgs>(get_class());
        }
    } // namespace DataTableNewRowEventArgs
} // namespace app::classes::types
