#pragma once
#include <Modloader/app/structs/DateTimeFormatInfoScanner_FoundDatePattern__Enum.h>
#include <Modloader/app/structs/DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormatInfoScanner_FoundDatePattern__Enum {
        inline app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class** type_info() {
            static app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class>(type_info(), "System.Globalization", "DateTimeFormatInfoScanner", "FoundDatePattern");
        }
        inline app::DateTimeFormatInfoScanner_FoundDatePattern__Enum* create() {
            return il2cpp::create_object<app::DateTimeFormatInfoScanner_FoundDatePattern__Enum>(get_class());
        }
    } // namespace DateTimeFormatInfoScanner_FoundDatePattern__Enum
} // namespace app::classes::types
