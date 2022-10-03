#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataObjectFieldAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataObjectFieldAttribute__Class** type_info;
        inline app::DataObjectFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectFieldAttribute__Class>(type_info, "System.ComponentModel", "DataObjectFieldAttribute");
        }
        inline app::DataObjectFieldAttribute* create() {
            return il2cpp::create_object<app::DataObjectFieldAttribute>(get_class());
        }
    } // namespace DataObjectFieldAttribute
} // namespace app::classes::types
