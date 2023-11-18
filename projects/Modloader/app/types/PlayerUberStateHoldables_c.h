#pragma once
#include <Modloader/app/structs/PlayerUberStateHoldables_c.h>
#include <Modloader/app/structs/PlayerUberStateHoldables_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateHoldables_c {
        inline app::PlayerUberStateHoldables_c__Class** type_info() {
            static app::PlayerUberStateHoldables_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateHoldables_c__Class**)(modloader::win::memory::resolve_rva(0x0472C4C8));
            }
            return cache;
        }
        inline app::PlayerUberStateHoldables_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateHoldables_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateHoldables", "<>c");
        }
        inline app::PlayerUberStateHoldables_c* create() {
            return il2cpp::create_object<app::PlayerUberStateHoldables_c>(get_class());
        }
    } // namespace PlayerUberStateHoldables_c
} // namespace app::classes::types
