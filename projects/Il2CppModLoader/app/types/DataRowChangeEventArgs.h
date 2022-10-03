#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRowChangeEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRowChangeEventArgs__Class** type_info;
        inline app::DataRowChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataRowChangeEventArgs__Class>(type_info, "System.Data", "DataRowChangeEventArgs");
        }
        inline app::DataRowChangeEventArgs* create() {
            return il2cpp::create_object<app::DataRowChangeEventArgs>(get_class());
        }
    } // namespace DataRowChangeEventArgs
} // namespace app::classes::types
