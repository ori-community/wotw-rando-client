#pragma once
#include <Modloader/app/structs/UnicodeDecodingConformance__Enum.h>
#include <Modloader/app/structs/UnicodeDecodingConformance__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnicodeDecodingConformance__Enum {
        inline app::UnicodeDecodingConformance__Enum__Class** type_info() {
            static app::UnicodeDecodingConformance__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnicodeDecodingConformance__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnicodeDecodingConformance__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnicodeDecodingConformance__Enum__Class>(type_info(), "System.Net.Configuration", "UnicodeDecodingConformance");
        }
        inline app::UnicodeDecodingConformance__Enum* create() {
            return il2cpp::create_object<app::UnicodeDecodingConformance__Enum>(get_class());
        }
    } // namespace UnicodeDecodingConformance__Enum
} // namespace app::classes::types
