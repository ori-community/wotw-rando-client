#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorWithTransitions {
        namespace {
            app::SpriteAnimatorWithTransitions__Class* type_info_ref = nullptr;
        }
        app::SpriteAnimatorWithTransitions__Class** type_info = &type_info_ref;
        inline app::SpriteAnimatorWithTransitions__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorWithTransitions__Class>(type_info, "", "SpriteAnimatorWithTransitions");
        }
        inline app::SpriteAnimatorWithTransitions* create() {
            return il2cpp::create_object<app::SpriteAnimatorWithTransitions>(get_class());
        }
    } // namespace SpriteAnimatorWithTransitions
} // namespace app::classes::types
