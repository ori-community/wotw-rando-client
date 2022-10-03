#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteState {
        namespace {
            app::SpriteState__Class* type_info_ref = nullptr;
        }
        app::SpriteState__Class** type_info = &type_info_ref;
        inline app::SpriteState__Class* get_class() {
            return il2cpp::get_class<app::SpriteState__Class>(type_info, "UnityEngine.UI", "SpriteState");
        }
        inline app::SpriteState* create() {
            return il2cpp::create_object<app::SpriteState>(get_class());
        }
        inline app::SpriteState__Boxed* box(app::SpriteState value) {
            return il2cpp::box_value<app::SpriteState__Boxed>(get_class(), value);
        }
        inline app::SpriteState__Array* create_array(int size) {
            return il2cpp::array_new<app::SpriteState__Array>(get_class(), size);
        }
    } // namespace SpriteState
} // namespace app::classes::types
