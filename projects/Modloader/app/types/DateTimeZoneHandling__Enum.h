#pragma once
#include <Modloader/app/structs/DateTimeZoneHandling__Enum.h>
#include <Modloader/app/structs/DateTimeZoneHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeZoneHandling__Enum {
        inline app::DateTimeZoneHandling__Enum__Class** type_info() {
            static app::DateTimeZoneHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeZoneHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeZoneHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeZoneHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "DateTimeZoneHandling");
        }
        inline app::DateTimeZoneHandling__Enum* create() {
            return il2cpp::create_object<app::DateTimeZoneHandling__Enum>(get_class());
        }
    } // namespace DateTimeZoneHandling__Enum
} // namespace app::classes::types
