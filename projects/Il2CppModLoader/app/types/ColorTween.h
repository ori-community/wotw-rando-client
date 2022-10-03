#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorTween {
        namespace {
            app::ColorTween__Class* type_info_ref = nullptr;
        }
        app::ColorTween__Class** type_info = &type_info_ref;
        inline app::ColorTween__Class* get_class() {
            return il2cpp::get_class<app::ColorTween__Class>(type_info, "UnityEngine.UI.CoroutineTween", "ColorTween");
        }
        inline app::ColorTween* create() {
            return il2cpp::create_object<app::ColorTween>(get_class());
        }
        inline app::ColorTween__Boxed* box(app::ColorTween value) {
            return il2cpp::box_value<app::ColorTween__Boxed>(get_class(), value);
        }
    } // namespace ColorTween
} // namespace app::classes::types
