#pragma once
#include <Modloader/app/structs/PlayerPuppetAbilities.h>
#include <Modloader/app/structs/PlayerPuppetAbilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPuppetAbilities {
        inline app::PlayerPuppetAbilities__Class** type_info() {
            static app::PlayerPuppetAbilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerPuppetAbilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerPuppetAbilities__Class* get_class() {
            return il2cpp::get_class<app::PlayerPuppetAbilities__Class>(type_info(), "", "PlayerPuppetAbilities");
        }
        inline app::PlayerPuppetAbilities* create() {
            return il2cpp::create_object<app::PlayerPuppetAbilities>(get_class());
        }
    } // namespace PlayerPuppetAbilities
} // namespace app::classes::types
