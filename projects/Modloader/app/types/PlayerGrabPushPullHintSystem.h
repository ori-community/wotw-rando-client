#pragma once
#include <Modloader/app/structs/PlayerGrabPushPullHintSystem.h>
#include <Modloader/app/structs/PlayerGrabPushPullHintSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerGrabPushPullHintSystem {
        inline app::PlayerGrabPushPullHintSystem__Class** type_info() {
            static app::PlayerGrabPushPullHintSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerGrabPushPullHintSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerGrabPushPullHintSystem__Class* get_class() {
            return il2cpp::get_class<app::PlayerGrabPushPullHintSystem__Class>(type_info(), "", "PlayerGrabPushPullHintSystem");
        }
        inline app::PlayerGrabPushPullHintSystem* create() {
            return il2cpp::create_object<app::PlayerGrabPushPullHintSystem>(get_class());
        }
    } // namespace PlayerGrabPushPullHintSystem
} // namespace app::classes::types
