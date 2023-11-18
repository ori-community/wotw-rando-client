#pragma once
#include <Modloader/app/structs/YogaSize.h>
#include <Modloader/app/structs/YogaSize__Boxed.h>
#include <Modloader/app/structs/YogaSize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace YogaSize {
        inline app::YogaSize__Class** type_info() {
            static app::YogaSize__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::YogaSize__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::YogaSize__Class* get_class() {
            return il2cpp::get_class<app::YogaSize__Class>(type_info(), "UnityEngine.Yoga", "YogaSize");
        }
        inline app::YogaSize* create() {
            return il2cpp::create_object<app::YogaSize>(get_class());
        }
        inline app::YogaSize__Boxed* box(app::YogaSize value) {
            return il2cpp::box_value<app::YogaSize__Boxed>(get_class(), value);
        }
    } // namespace YogaSize
} // namespace app::classes::types
