#pragma once
#include <Modloader/app/structs/PlayerAbilities.h>
#include <Modloader/app/structs/PlayerAbilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAbilities {
        inline app::PlayerAbilities__Class** type_info() {
            static app::PlayerAbilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAbilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAbilities__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilities__Class>(type_info(), "", "PlayerAbilities");
        }
        inline app::PlayerAbilities* create() {
            return il2cpp::create_object<app::PlayerAbilities>(get_class());
        }
    } // namespace PlayerAbilities
} // namespace app::classes::types
