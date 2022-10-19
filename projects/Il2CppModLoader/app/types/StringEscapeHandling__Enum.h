#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringEscapeHandling__Enum {
        namespace {
            inline app::StringEscapeHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StringEscapeHandling__Enum__Class** type_info = &type_info_ref;
        inline app::StringEscapeHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::StringEscapeHandling__Enum__Class>(type_info, "Newtonsoft.Json", "StringEscapeHandling");
        }
        inline app::StringEscapeHandling__Enum* create() {
            return il2cpp::create_object<app::StringEscapeHandling__Enum>(get_class());
        }
    } // namespace StringEscapeHandling__Enum
} // namespace app::classes::types
