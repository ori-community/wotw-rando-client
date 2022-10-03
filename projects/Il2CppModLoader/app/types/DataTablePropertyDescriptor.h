#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataTablePropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataTablePropertyDescriptor__Class** type_info;
        inline app::DataTablePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataTablePropertyDescriptor__Class>(type_info, "System.Data", "DataTablePropertyDescriptor");
        }
        inline app::DataTablePropertyDescriptor* create() {
            return il2cpp::create_object<app::DataTablePropertyDescriptor>(get_class());
        }
    } // namespace DataTablePropertyDescriptor
} // namespace app::classes::types
