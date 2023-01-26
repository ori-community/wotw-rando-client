#pragma once
#include <Modloader/app/structs/DecimalConverter.h>
#include <Modloader/app/structs/DecimalConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecimalConverter {
        inline app::DecimalConverter__Class** type_info() {
            static app::DecimalConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DecimalConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DecimalConverter__Class* get_class() {
            return il2cpp::get_class<app::DecimalConverter__Class>(type_info(), "System.ComponentModel", "DecimalConverter");
        }
        inline app::DecimalConverter* create() {
            return il2cpp::create_object<app::DecimalConverter>(get_class());
        }
    } // namespace DecimalConverter
} // namespace app::classes::types
