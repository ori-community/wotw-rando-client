#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerCollisionUberStateTrigger {
        namespace {
            app::PlayerCollisionUberStateTrigger__Class* type_info_ref = nullptr;
        }
        app::PlayerCollisionUberStateTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerCollisionUberStateTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionUberStateTrigger__Class>(type_info, "", "PlayerCollisionUberStateTrigger");
        }
        inline app::PlayerCollisionUberStateTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionUberStateTrigger>(get_class());
        }
    } // namespace PlayerCollisionUberStateTrigger
} // namespace app::classes::types
