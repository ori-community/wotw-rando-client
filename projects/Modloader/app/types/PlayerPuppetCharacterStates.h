#pragma once
#include <Modloader/app/structs/PlayerPuppetCharacterStates.h>
#include <Modloader/app/structs/PlayerPuppetCharacterStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPuppetCharacterStates {
        inline app::PlayerPuppetCharacterStates__Class** type_info() {
            static app::PlayerPuppetCharacterStates__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerPuppetCharacterStates__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerPuppetCharacterStates__Class* get_class() {
            return il2cpp::get_class<app::PlayerPuppetCharacterStates__Class>(type_info(), "", "PlayerPuppetCharacterStates");
        }
        inline app::PlayerPuppetCharacterStates* create() {
            return il2cpp::create_object<app::PlayerPuppetCharacterStates>(get_class());
        }
    } // namespace PlayerPuppetCharacterStates
} // namespace app::classes::types
