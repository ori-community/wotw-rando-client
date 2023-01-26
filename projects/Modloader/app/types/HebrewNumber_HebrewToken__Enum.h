#pragma once
#include <Modloader/app/structs/HebrewNumber_HebrewToken__Enum.h>
#include <Modloader/app/structs/HebrewNumber_HebrewToken__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HebrewNumber_HebrewToken__Enum {
        inline app::HebrewNumber_HebrewToken__Enum__Class** type_info() {
            static app::HebrewNumber_HebrewToken__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HebrewNumber_HebrewToken__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HebrewNumber_HebrewToken__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HebrewNumber_HebrewToken__Enum__Class>(type_info(), "System.Globalization", "HebrewNumber", "HebrewToken");
        }
        inline app::HebrewNumber_HebrewToken__Enum* create() {
            return il2cpp::create_object<app::HebrewNumber_HebrewToken__Enum>(get_class());
        }
    } // namespace HebrewNumber_HebrewToken__Enum
} // namespace app::classes::types
