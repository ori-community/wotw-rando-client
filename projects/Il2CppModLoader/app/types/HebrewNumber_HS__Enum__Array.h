#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HebrewNumber_HS__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HebrewNumber_HS__Enum__Array__Class** type_info;
        inline app::HebrewNumber_HS__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumber_HS__Enum__Array__Class>(type_info, "System.Globalization", "HebrewNumber+HS[]");
        }
        inline app::HebrewNumber_HS__Enum__Array* create() {
            return il2cpp::create_object<app::HebrewNumber_HS__Enum__Array>(get_class());
        }
        inline app::HebrewNumber_HS__Enum__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::HebrewNumber_HS__Enum__Array__Array>(get_class(), size);
        }
    } // namespace HebrewNumber_HS__Enum__Array
} // namespace app::classes::types
