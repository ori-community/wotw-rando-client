#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorAction {
        namespace {
            app::SpriteAnimatorAction__Class* type_info_ref = nullptr;
        }
        app::SpriteAnimatorAction__Class** type_info = &type_info_ref;
        inline app::SpriteAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorAction__Class>(type_info, "", "SpriteAnimatorAction");
        }
        inline app::SpriteAnimatorAction* create() {
            return il2cpp::create_object<app::SpriteAnimatorAction>(get_class());
        }
    } // namespace SpriteAnimatorAction
} // namespace app::classes::types
