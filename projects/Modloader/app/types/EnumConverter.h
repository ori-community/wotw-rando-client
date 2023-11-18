#pragma once
#include <Modloader/app/structs/EnumConverter.h>
#include <Modloader/app/structs/EnumConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumConverter {
        inline app::EnumConverter__Class** type_info() {
            static app::EnumConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnumConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnumConverter__Class* get_class() {
            return il2cpp::get_class<app::EnumConverter__Class>(type_info(), "System.ComponentModel", "EnumConverter");
        }
        inline app::EnumConverter* create() {
            return il2cpp::create_object<app::EnumConverter>(get_class());
        }
    } // namespace EnumConverter
} // namespace app::classes::types
