#pragma once
#include <Modloader/app/structs/PlayerUberStateAbilities.h>
#include <Modloader/app/structs/PlayerUberStateAbilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities {
        inline app::PlayerUberStateAbilities__Class** type_info() {
            static app::PlayerUberStateAbilities__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateAbilities__Class**)(modloader::win::memory::resolve_rva(0x04718198));
            }
            return cache;
        }
        inline app::PlayerUberStateAbilities__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateAbilities__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateAbilities");
        }
        inline app::PlayerUberStateAbilities* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities>(get_class());
        }
    } // namespace PlayerUberStateAbilities
} // namespace app::classes::types
