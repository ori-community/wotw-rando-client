#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataObjectAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataObjectAttribute__Class** type_info;
        inline app::DataObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectAttribute__Class>(type_info, "System.ComponentModel", "DataObjectAttribute");
        }
        inline app::DataObjectAttribute* create() {
            return il2cpp::create_object<app::DataObjectAttribute>(get_class());
        }
    } // namespace DataObjectAttribute
} // namespace app::classes::types
