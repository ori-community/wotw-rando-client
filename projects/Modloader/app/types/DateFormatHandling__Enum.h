#pragma once
#include <Modloader/app/structs/DateFormatHandling__Enum.h>
#include <Modloader/app/structs/DateFormatHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateFormatHandling__Enum {
        inline app::DateFormatHandling__Enum__Class** type_info() {
            static app::DateFormatHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateFormatHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateFormatHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateFormatHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "DateFormatHandling");
        }
        inline app::DateFormatHandling__Enum* create() {
            return il2cpp::create_object<app::DateFormatHandling__Enum>(get_class());
        }
    } // namespace DateFormatHandling__Enum
} // namespace app::classes::types
