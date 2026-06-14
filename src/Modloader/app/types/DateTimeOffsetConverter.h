#pragma once
#include <Modloader/app/structs/DateTimeOffsetConverter.h>
#include <Modloader/app/structs/DateTimeOffsetConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeOffsetConverter {
        inline app::DateTimeOffsetConverter__Class** type_info() {
            static app::DateTimeOffsetConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeOffsetConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeOffsetConverter__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffsetConverter__Class>(type_info(), "System.ComponentModel", "DateTimeOffsetConverter");
        }
        inline app::DateTimeOffsetConverter* create() {
            return il2cpp::create_object<app::DateTimeOffsetConverter>(get_class());
        }
    } // namespace DateTimeOffsetConverter
} // namespace app::classes::types
