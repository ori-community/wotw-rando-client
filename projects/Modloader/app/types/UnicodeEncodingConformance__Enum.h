#pragma once
#include <Modloader/app/structs/UnicodeEncodingConformance__Enum.h>
#include <Modloader/app/structs/UnicodeEncodingConformance__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnicodeEncodingConformance__Enum {
        inline app::UnicodeEncodingConformance__Enum__Class** type_info() {
            static app::UnicodeEncodingConformance__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnicodeEncodingConformance__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnicodeEncodingConformance__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnicodeEncodingConformance__Enum__Class>(type_info(), "System.Net.Configuration", "UnicodeEncodingConformance");
        }
        inline app::UnicodeEncodingConformance__Enum* create() {
            return il2cpp::create_object<app::UnicodeEncodingConformance__Enum>(get_class());
        }
    } // namespace UnicodeEncodingConformance__Enum
} // namespace app::classes::types
