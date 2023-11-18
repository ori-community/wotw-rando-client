#pragma once
#include <Modloader/app/structs/PlayerAbilityStatePair.h>
#include <Modloader/app/structs/PlayerAbilityStatePair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAbilityStatePair {
        inline app::PlayerAbilityStatePair__Class** type_info() {
            static app::PlayerAbilityStatePair__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerAbilityStatePair__Class**)(modloader::win::memory::resolve_rva(0x0478CC90));
            }
            return cache;
        }
        inline app::PlayerAbilityStatePair__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilityStatePair__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerAbilityStatePair");
        }
        inline app::PlayerAbilityStatePair* create() {
            return il2cpp::create_object<app::PlayerAbilityStatePair>(get_class());
        }
    } // namespace PlayerAbilityStatePair
} // namespace app::classes::types
