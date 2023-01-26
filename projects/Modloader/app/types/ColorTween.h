#pragma once
#include <Modloader/app/structs/ColorTween.h>
#include <Modloader/app/structs/ColorTween__Boxed.h>
#include <Modloader/app/structs/ColorTween__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorTween {
        inline app::ColorTween__Class** type_info() {
            static app::ColorTween__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorTween__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorTween__Class* get_class() {
            return il2cpp::get_class<app::ColorTween__Class>(type_info(), "UnityEngine.UI.CoroutineTween", "ColorTween");
        }
        inline app::ColorTween* create() {
            return il2cpp::create_object<app::ColorTween>(get_class());
        }
        inline app::ColorTween__Boxed* box(app::ColorTween value) {
            return il2cpp::box_value<app::ColorTween__Boxed>(get_class(), value);
        }
    } // namespace ColorTween
} // namespace app::classes::types
