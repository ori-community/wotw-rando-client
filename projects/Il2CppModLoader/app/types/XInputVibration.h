#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XInputVibration {
        namespace {
            app::XInputVibration__Class* type_info_ref = nullptr;
        }
        app::XInputVibration__Class** type_info = &type_info_ref;
        inline app::XInputVibration__Class* get_class() {
            return il2cpp::get_class<app::XInputVibration__Class>(type_info, "J2i.Net.XInputWrapper", "XInputVibration");
        }
        inline app::XInputVibration* create() {
            return il2cpp::create_object<app::XInputVibration>(get_class());
        }
        inline app::XInputVibration__Boxed* box(app::XInputVibration value) {
            return il2cpp::box_value<app::XInputVibration__Boxed>(get_class(), value);
        }
    } // namespace XInputVibration
} // namespace app::classes::types
