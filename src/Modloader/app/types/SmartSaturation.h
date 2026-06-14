#pragma once
#include <Modloader/app/structs/SmartSaturation.h>
#include <Modloader/app/structs/SmartSaturation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmartSaturation {
        inline app::SmartSaturation__Class** type_info() {
            static app::SmartSaturation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmartSaturation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmartSaturation__Class* get_class() {
            return il2cpp::get_class<app::SmartSaturation__Class>(type_info(), "Colorful", "SmartSaturation");
        }
        inline app::SmartSaturation* create() {
            return il2cpp::create_object<app::SmartSaturation>(get_class());
        }
    } // namespace SmartSaturation
} // namespace app::classes::types
