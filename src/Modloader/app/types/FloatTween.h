#pragma once
#include <Modloader/app/structs/FloatTween.h>
#include <Modloader/app/structs/FloatTween__Boxed.h>
#include <Modloader/app/structs/FloatTween__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatTween {
        inline app::FloatTween__Class** type_info() {
            static app::FloatTween__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatTween__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatTween__Class* get_class() {
            return il2cpp::get_class<app::FloatTween__Class>(type_info(), "UnityEngine.UI.CoroutineTween", "FloatTween");
        }
        inline app::FloatTween* create() {
            return il2cpp::create_object<app::FloatTween>(get_class());
        }
        inline app::FloatTween__Boxed* box(app::FloatTween value) {
            return il2cpp::box_value<app::FloatTween__Boxed>(get_class(), value);
        }
    } // namespace FloatTween
} // namespace app::classes::types
