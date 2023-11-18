#pragma once
#include <Modloader/app/structs/PlayerCollisionUberStateTrigger.h>
#include <Modloader/app/structs/PlayerCollisionUberStateTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerCollisionUberStateTrigger {
        inline app::PlayerCollisionUberStateTrigger__Class** type_info() {
            static app::PlayerCollisionUberStateTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerCollisionUberStateTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerCollisionUberStateTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionUberStateTrigger__Class>(type_info(), "", "PlayerCollisionUberStateTrigger");
        }
        inline app::PlayerCollisionUberStateTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionUberStateTrigger>(get_class());
        }
    } // namespace PlayerCollisionUberStateTrigger
} // namespace app::classes::types
