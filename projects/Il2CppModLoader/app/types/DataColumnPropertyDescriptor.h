#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataColumnPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataColumnPropertyDescriptor__Class** type_info;
        inline app::DataColumnPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataColumnPropertyDescriptor__Class>(type_info, "System.Data", "DataColumnPropertyDescriptor");
        }
        inline app::DataColumnPropertyDescriptor* create() {
            return il2cpp::create_object<app::DataColumnPropertyDescriptor>(get_class());
        }
    } // namespace DataColumnPropertyDescriptor
} // namespace app::classes::types
