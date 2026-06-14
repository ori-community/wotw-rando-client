#pragma once
#include <Modloader/app/structs/Touch.h>
#include <Modloader/app/structs/Touch__Boxed.h>
#include <Modloader/app/structs/Touch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Touch {
        inline app::Touch__Class** type_info() {
            static app::Touch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Touch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Touch__Class* get_class() {
            return il2cpp::get_class<app::Touch__Class>(type_info(), "UnityEngine", "Touch");
        }
        inline app::Touch* create() {
            return il2cpp::create_object<app::Touch>(get_class());
        }
        inline app::Touch__Boxed* box(app::Touch value) {
            return il2cpp::box_value<app::Touch__Boxed>(get_class(), value);
        }
    } // namespace Touch
} // namespace app::classes::types
