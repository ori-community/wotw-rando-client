#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorAction_PlayMode__Enum {
        namespace {
            app::AnimatorAction_PlayMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimatorAction_PlayMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatorAction_PlayMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimatorAction_PlayMode__Enum__Class>(type_info, "", "AnimatorAction", "PlayMode");
        }
        inline app::AnimatorAction_PlayMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorAction_PlayMode__Enum>(get_class());
        }
    } // namespace AnimatorAction_PlayMode__Enum
} // namespace app::classes::types
