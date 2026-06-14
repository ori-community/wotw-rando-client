#pragma once
#include <Modloader/app/structs/PlayerUberStateAbilities_c.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities_c {
        inline app::PlayerUberStateAbilities_c__Class** type_info() {
            static app::PlayerUberStateAbilities_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateAbilities_c__Class**)(modloader::win::memory::resolve_rva(0x04784DC0));
            }
            return cache;
        }
        inline app::PlayerUberStateAbilities_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAbilities_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateAbilities", "<>c");
        }
        inline app::PlayerUberStateAbilities_c* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities_c>(get_class());
        }
    } // namespace PlayerUberStateAbilities_c
} // namespace app::classes::types
