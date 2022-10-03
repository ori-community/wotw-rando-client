#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorAction {
        namespace {
            app::AnimatorAction__Class* type_info_ref = nullptr;
        }
        app::AnimatorAction__Class** type_info = &type_info_ref;
        inline app::AnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::AnimatorAction__Class>(type_info, "", "AnimatorAction");
        }
        inline app::AnimatorAction* create() {
            return il2cpp::create_object<app::AnimatorAction>(get_class());
        }
    } // namespace AnimatorAction
} // namespace app::classes::types
