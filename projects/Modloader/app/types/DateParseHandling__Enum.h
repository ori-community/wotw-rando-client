#pragma once
#include <Modloader/app/structs/DateParseHandling__Enum.h>
#include <Modloader/app/structs/DateParseHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateParseHandling__Enum {
        inline app::DateParseHandling__Enum__Class** type_info() {
            static app::DateParseHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateParseHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateParseHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateParseHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "DateParseHandling");
        }
        inline app::DateParseHandling__Enum* create() {
            return il2cpp::create_object<app::DateParseHandling__Enum>(get_class());
        }
    } // namespace DateParseHandling__Enum
} // namespace app::classes::types
