#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteBone {
        namespace {
            app::SpriteBone__Class* type_info_ref = nullptr;
        }
        app::SpriteBone__Class** type_info = &type_info_ref;
        inline app::SpriteBone__Class* get_class() {
            return il2cpp::get_class<app::SpriteBone__Class>(type_info, "UnityEngine.Experimental.U2D", "SpriteBone");
        }
        inline app::SpriteBone* create() {
            return il2cpp::create_object<app::SpriteBone>(get_class());
        }
        inline app::SpriteBone__Boxed* box(app::SpriteBone value) {
            return il2cpp::box_value<app::SpriteBone__Boxed>(get_class(), value);
        }
    } // namespace SpriteBone
} // namespace app::classes::types
