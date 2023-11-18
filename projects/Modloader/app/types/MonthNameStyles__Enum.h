#pragma once
#include <Modloader/app/structs/MonthNameStyles__Enum.h>
#include <Modloader/app/structs/MonthNameStyles__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonthNameStyles__Enum {
        inline app::MonthNameStyles__Enum__Class** type_info() {
            static app::MonthNameStyles__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonthNameStyles__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonthNameStyles__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonthNameStyles__Enum__Class>(type_info(), "System.Globalization", "MonthNameStyles");
        }
        inline app::MonthNameStyles__Enum* create() {
            return il2cpp::create_object<app::MonthNameStyles__Enum>(get_class());
        }
    } // namespace MonthNameStyles__Enum
} // namespace app::classes::types
