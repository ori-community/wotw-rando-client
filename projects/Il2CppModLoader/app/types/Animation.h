#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Animation {
        namespace {
            app::Animation__Class* type_info_ref = nullptr;
        }
        app::Animation__Class** type_info = &type_info_ref;
        inline app::Animation__Class* get_class() {
            return il2cpp::get_class<app::Animation__Class>(type_info, "UnityEngine", "Animation");
        }
        inline app::Animation* create() {
            return il2cpp::create_object<app::Animation>(get_class());
        }
    } // namespace Animation
} // namespace app::classes::types
