#pragma once
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Array.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities_Ability__Array {
        inline app::PlayerUberStateAbilities_Ability__Array__Class** type_info() {
            static app::PlayerUberStateAbilities_Ability__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerUberStateAbilities_Ability__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerUberStateAbilities_Ability__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateAbilities_Ability__Array__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateAbilities+Ability[]");
        }
        inline app::PlayerUberStateAbilities_Ability__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities_Ability__Array>(get_class());
        }
    } // namespace PlayerUberStateAbilities_Ability__Array
} // namespace app::classes::types
