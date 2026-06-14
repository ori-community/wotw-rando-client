#pragma once
#include <Modloader/app/structs/PlayerCollisionLeaveTrigger.h>
#include <Modloader/app/structs/PlayerCollisionLeaveTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerCollisionLeaveTrigger {
        inline app::PlayerCollisionLeaveTrigger__Class** type_info() {
            static app::PlayerCollisionLeaveTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerCollisionLeaveTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerCollisionLeaveTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionLeaveTrigger__Class>(type_info(), "", "PlayerCollisionLeaveTrigger");
        }
        inline app::PlayerCollisionLeaveTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionLeaveTrigger>(get_class());
        }
    } // namespace PlayerCollisionLeaveTrigger
} // namespace app::classes::types
