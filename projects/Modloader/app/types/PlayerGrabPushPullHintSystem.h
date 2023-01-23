#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerGrabPushPullHintSystem__Class.h>
#include <Modloader/app/structs/PlayerGrabPushPullHintSystem.h>

namespace app::classes::types {
    namespace PlayerGrabPushPullHintSystem {
        namespace {
            inline app::PlayerGrabPushPullHintSystem__Class* type_info_ref = nullptr;
        }
        inline app::PlayerGrabPushPullHintSystem__Class** type_info = &type_info_ref;
        inline app::PlayerGrabPushPullHintSystem__Class* get_class() {
            return il2cpp::get_class<app::PlayerGrabPushPullHintSystem__Class>(type_info, "", "PlayerGrabPushPullHintSystem");
        }
        inline app::PlayerGrabPushPullHintSystem* create() {
            return il2cpp::create_object<app::PlayerGrabPushPullHintSystem>(get_class());
        }
    } // namespace PlayerGrabPushPullHintSystem
} // namespace app::classes::types
