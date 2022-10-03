#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeConverter__Class** type_info;
        inline app::TypeConverter__Class* get_class() {
            return il2cpp::get_class<app::TypeConverter__Class>(type_info, "System.ComponentModel", "TypeConverter");
        }
        inline app::TypeConverter* create() {
            return il2cpp::create_object<app::TypeConverter>(get_class());
        }
    } // namespace TypeConverter
} // namespace app::classes::types
