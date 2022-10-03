#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormatInfoScanner_FoundDatePattern__Enum {
        namespace {
            app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class* type_info_ref = nullptr;
        }
        app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class>(type_info, "System.Globalization", "DateTimeFormatInfoScanner", "FoundDatePattern");
        }
        inline app::DateTimeFormatInfoScanner_FoundDatePattern__Enum* create() {
            return il2cpp::create_object<app::DateTimeFormatInfoScanner_FoundDatePattern__Enum>(get_class());
        }
    } // namespace DateTimeFormatInfoScanner_FoundDatePattern__Enum
} // namespace app::classes::types
