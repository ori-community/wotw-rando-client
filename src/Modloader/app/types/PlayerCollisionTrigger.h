#pragma once
#include <Modloader/app/structs/PlayerCollisionTrigger.h>
#include <Modloader/app/structs/PlayerCollisionTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerCollisionTrigger {
        inline app::PlayerCollisionTrigger__Class** type_info() {
            static app::PlayerCollisionTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerCollisionTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionTrigger__Class>(type_info(), "", "PlayerCollisionTrigger");
        }
        inline app::PlayerCollisionTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionTrigger>(get_class());
        }
    } // namespace PlayerCollisionTrigger
} // namespace app::classes::types
