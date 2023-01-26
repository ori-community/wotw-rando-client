#pragma once
#include <Modloader/app/structs/DateTimeConverter.h>
#include <Modloader/app/structs/DateTimeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeConverter {
        inline app::DateTimeConverter__Class** type_info() {
            static app::DateTimeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeConverter__Class* get_class() {
            return il2cpp::get_class<app::DateTimeConverter__Class>(type_info(), "System.ComponentModel", "DateTimeConverter");
        }
        inline app::DateTimeConverter* create() {
            return il2cpp::create_object<app::DateTimeConverter>(get_class());
        }
    } // namespace DateTimeConverter
} // namespace app::classes::types
