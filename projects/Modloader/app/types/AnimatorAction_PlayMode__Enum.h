#pragma once
#include <Modloader/app/structs/AnimatorAction_PlayMode__Enum.h>
#include <Modloader/app/structs/AnimatorAction_PlayMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorAction_PlayMode__Enum {
        inline app::AnimatorAction_PlayMode__Enum__Class** type_info() {
            static app::AnimatorAction_PlayMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorAction_PlayMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorAction_PlayMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimatorAction_PlayMode__Enum__Class>(type_info(), "", "AnimatorAction", "PlayMode");
        }
        inline app::AnimatorAction_PlayMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorAction_PlayMode__Enum>(get_class());
        }
    } // namespace AnimatorAction_PlayMode__Enum
} // namespace app::classes::types
