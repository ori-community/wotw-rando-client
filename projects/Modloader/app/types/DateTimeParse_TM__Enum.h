#pragma once
#include <Modloader/app/structs/DateTimeParse_TM__Enum.h>
#include <Modloader/app/structs/DateTimeParse_TM__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeParse_TM__Enum {
        inline app::DateTimeParse_TM__Enum__Class** type_info() {
            static app::DateTimeParse_TM__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeParse_TM__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeParse_TM__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeParse_TM__Enum__Class>(type_info(), "System", "DateTimeParse", "TM");
        }
        inline app::DateTimeParse_TM__Enum* create() {
            return il2cpp::create_object<app::DateTimeParse_TM__Enum>(get_class());
        }
    } // namespace DateTimeParse_TM__Enum
} // namespace app::classes::types
