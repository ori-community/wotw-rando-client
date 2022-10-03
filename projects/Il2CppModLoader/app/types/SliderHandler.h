#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SliderHandler {
        namespace {
            app::SliderHandler__Class* type_info_ref = nullptr;
        }
        app::SliderHandler__Class** type_info = &type_info_ref;
        inline app::SliderHandler__Class* get_class() {
            return il2cpp::get_class<app::SliderHandler__Class>(type_info, "UnityEngine", "SliderHandler");
        }
        inline app::SliderHandler* create() {
            return il2cpp::create_object<app::SliderHandler>(get_class());
        }
        inline app::SliderHandler__Boxed* box(app::SliderHandler value) {
            return il2cpp::box_value<app::SliderHandler__Boxed>(get_class(), value);
        }
    } // namespace SliderHandler
} // namespace app::classes::types
