#pragma once
#include <Modloader/app/structs/AnalogTV.h>
#include <Modloader/app/structs/AnalogTV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnalogTV {
        inline app::AnalogTV__Class** type_info() {
            static app::AnalogTV__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnalogTV__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnalogTV__Class* get_class() {
            return il2cpp::get_class<app::AnalogTV__Class>(type_info(), "Colorful", "AnalogTV");
        }
        inline app::AnalogTV* create() {
            return il2cpp::create_object<app::AnalogTV>(get_class());
        }
    } // namespace AnalogTV
} // namespace app::classes::types
