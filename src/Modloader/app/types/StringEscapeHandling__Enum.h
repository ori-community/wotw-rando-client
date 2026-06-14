#pragma once
#include <Modloader/app/structs/StringEscapeHandling__Enum.h>
#include <Modloader/app/structs/StringEscapeHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringEscapeHandling__Enum {
        inline app::StringEscapeHandling__Enum__Class** type_info() {
            static app::StringEscapeHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringEscapeHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringEscapeHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::StringEscapeHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "StringEscapeHandling");
        }
        inline app::StringEscapeHandling__Enum* create() {
            return il2cpp::create_object<app::StringEscapeHandling__Enum>(get_class());
        }
    } // namespace StringEscapeHandling__Enum
} // namespace app::classes::types
