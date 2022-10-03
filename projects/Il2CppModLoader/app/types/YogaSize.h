#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace YogaSize {
        namespace {
            app::YogaSize__Class* type_info_ref = nullptr;
        }
        app::YogaSize__Class** type_info = &type_info_ref;
        inline app::YogaSize__Class* get_class() {
            return il2cpp::get_class<app::YogaSize__Class>(type_info, "UnityEngine.Yoga", "YogaSize");
        }
        inline app::YogaSize* create() {
            return il2cpp::create_object<app::YogaSize>(get_class());
        }
        inline app::YogaSize__Boxed* box(app::YogaSize value) {
            return il2cpp::box_value<app::YogaSize__Boxed>(get_class(), value);
        }
    } // namespace YogaSize
} // namespace app::classes::types
