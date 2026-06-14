#pragma once
#include <Modloader/app/structs/PlayerFaceDirectionAction.h>
#include <Modloader/app/structs/PlayerFaceDirectionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerFaceDirectionAction {
        inline app::PlayerFaceDirectionAction__Class** type_info() {
            static app::PlayerFaceDirectionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerFaceDirectionAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerFaceDirectionAction__Class* get_class() {
            return il2cpp::get_class<app::PlayerFaceDirectionAction__Class>(type_info(), "", "PlayerFaceDirectionAction");
        }
        inline app::PlayerFaceDirectionAction* create() {
            return il2cpp::create_object<app::PlayerFaceDirectionAction>(get_class());
        }
    } // namespace PlayerFaceDirectionAction
} // namespace app::classes::types
