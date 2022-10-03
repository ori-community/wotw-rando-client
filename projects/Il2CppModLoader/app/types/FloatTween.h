#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatTween {
        namespace {
            app::FloatTween__Class* type_info_ref = nullptr;
        }
        app::FloatTween__Class** type_info = &type_info_ref;
        inline app::FloatTween__Class* get_class() {
            return il2cpp::get_class<app::FloatTween__Class>(type_info, "UnityEngine.UI.CoroutineTween", "FloatTween");
        }
        inline app::FloatTween* create() {
            return il2cpp::create_object<app::FloatTween>(get_class());
        }
        inline app::FloatTween__Boxed* box(app::FloatTween value) {
            return il2cpp::box_value<app::FloatTween__Boxed>(get_class(), value);
        }
    } // namespace FloatTween
} // namespace app::classes::types
