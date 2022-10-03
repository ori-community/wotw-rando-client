#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataObjectMethodAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataObjectMethodAttribute__Class** type_info;
        inline app::DataObjectMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectMethodAttribute__Class>(type_info, "System.ComponentModel", "DataObjectMethodAttribute");
        }
        inline app::DataObjectMethodAttribute* create() {
            return il2cpp::create_object<app::DataObjectMethodAttribute>(get_class());
        }
    } // namespace DataObjectMethodAttribute
} // namespace app::classes::types
