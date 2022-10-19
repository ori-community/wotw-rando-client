#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerCollisionLeaveTrigger {
        namespace {
            inline app::PlayerCollisionLeaveTrigger__Class* type_info_ref = nullptr;
        }
        inline app::PlayerCollisionLeaveTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerCollisionLeaveTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerCollisionLeaveTrigger__Class>(type_info, "", "PlayerCollisionLeaveTrigger");
        }
        inline app::PlayerCollisionLeaveTrigger* create() {
            return il2cpp::create_object<app::PlayerCollisionLeaveTrigger>(get_class());
        }
    } // namespace PlayerCollisionLeaveTrigger
} // namespace app::classes::types
