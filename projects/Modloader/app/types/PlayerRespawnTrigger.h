#pragma once
#include <Modloader/app/structs/PlayerRespawnTrigger.h>
#include <Modloader/app/structs/PlayerRespawnTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerRespawnTrigger {
        inline app::PlayerRespawnTrigger__Class** type_info() {
            static app::PlayerRespawnTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerRespawnTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerRespawnTrigger__Class* get_class() {
            return il2cpp::get_class<app::PlayerRespawnTrigger__Class>(type_info(), "", "PlayerRespawnTrigger");
        }
        inline app::PlayerRespawnTrigger* create() {
            return il2cpp::create_object<app::PlayerRespawnTrigger>(get_class());
        }
    } // namespace PlayerRespawnTrigger
} // namespace app::classes::types
