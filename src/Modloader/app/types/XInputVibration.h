#pragma once
#include <Modloader/app/structs/XInputVibration.h>
#include <Modloader/app/structs/XInputVibration__Boxed.h>
#include <Modloader/app/structs/XInputVibration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XInputVibration {
        inline app::XInputVibration__Class** type_info() {
            static app::XInputVibration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XInputVibration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XInputVibration__Class* get_class() {
            return il2cpp::get_class<app::XInputVibration__Class>(type_info(), "J2i.Net.XInputWrapper", "XInputVibration");
        }
        inline app::XInputVibration* create() {
            return il2cpp::create_object<app::XInputVibration>(get_class());
        }
        inline app::XInputVibration__Boxed* box(app::XInputVibration value) {
            return il2cpp::box_value<app::XInputVibration__Boxed>(get_class(), value);
        }
    } // namespace XInputVibration
} // namespace app::classes::types
