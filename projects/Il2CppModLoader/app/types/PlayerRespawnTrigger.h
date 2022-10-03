#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerRespawnTrigger {
        namespace {
            app::PlayerRespawnTrigger__Class* type_info_ref = nullptr;
        }
        app::PlayerRespawnTrigger__Class** type_info = &type_info_ref;
        inline app::PlayerRespawnTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerRespawnTrigger__Class>(type_info, "", "PlayerRespawnTrigger");
        }
        inline app::PlayerRespawnTrigger* create() {
            return il2cpp::create_object<app::PlayerRespawnTrigger>(get_class());
        }
    } // namespace PlayerRespawnTrigger
} // namespace app::classes::types
