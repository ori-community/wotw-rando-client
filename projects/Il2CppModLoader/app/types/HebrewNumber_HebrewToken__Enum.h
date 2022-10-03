#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HebrewNumber_HebrewToken__Enum {
        namespace {
            app::HebrewNumber_HebrewToken__Enum__Class* type_info_ref = nullptr;
        }
        app::HebrewNumber_HebrewToken__Enum__Class** type_info = &type_info_ref;
        inline app::HebrewNumber_HebrewToken__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HebrewNumber_HebrewToken__Enum__Class>(type_info, "System.Globalization", "HebrewNumber", "HebrewToken");
        }
        inline app::HebrewNumber_HebrewToken__Enum* create() {
            return il2cpp::create_object<app::HebrewNumber_HebrewToken__Enum>(get_class());
        }
    } // namespace HebrewNumber_HebrewToken__Enum
} // namespace app::classes::types
