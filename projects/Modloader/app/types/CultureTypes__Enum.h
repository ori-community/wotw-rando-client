#pragma once
#include <Modloader/app/structs/CultureTypes__Enum.h>
#include <Modloader/app/structs/CultureTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureTypes__Enum {
        inline app::CultureTypes__Enum__Class** type_info() {
            static app::CultureTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CultureTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CultureTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::CultureTypes__Enum__Class>(type_info(), "System.Globalization", "CultureTypes");
        }
        inline app::CultureTypes__Enum* create() {
            return il2cpp::create_object<app::CultureTypes__Enum>(get_class());
        }
    } // namespace CultureTypes__Enum
} // namespace app::classes::types
