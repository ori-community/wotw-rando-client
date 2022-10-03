#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HebrewNumber {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HebrewNumber__Class** type_info;
        inline app::HebrewNumber__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumber__Class>(type_info, "System.Globalization", "HebrewNumber");
        }
        inline app::HebrewNumber* create() {
            return il2cpp::create_object<app::HebrewNumber>(get_class());
        }
    } // namespace HebrewNumber
} // namespace app::classes::types
