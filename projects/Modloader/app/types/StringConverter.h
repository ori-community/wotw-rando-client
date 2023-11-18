#pragma once
#include <Modloader/app/structs/StringConverter.h>
#include <Modloader/app/structs/StringConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringConverter {
        inline app::StringConverter__Class** type_info() {
            static app::StringConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringConverter__Class* get_class() {
            return il2cpp::get_class<app::StringConverter__Class>(type_info(), "System.ComponentModel", "StringConverter");
        }
        inline app::StringConverter* create() {
            return il2cpp::create_object<app::StringConverter>(get_class());
        }
    } // namespace StringConverter
} // namespace app::classes::types
