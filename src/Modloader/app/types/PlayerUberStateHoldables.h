#pragma once
#include <Modloader/app/structs/PlayerUberStateHoldables.h>
#include <Modloader/app/structs/PlayerUberStateHoldables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateHoldables {
        inline app::PlayerUberStateHoldables__Class** type_info() {
            static app::PlayerUberStateHoldables__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateHoldables__Class**)(modloader::win::memory::resolve_rva(0x0471E718));
            }
            return cache;
        }
        inline app::PlayerUberStateHoldables__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateHoldables__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateHoldables");
        }
        inline app::PlayerUberStateHoldables* create() {
            return il2cpp::create_object<app::PlayerUberStateHoldables>(get_class());
        }
    } // namespace PlayerUberStateHoldables
} // namespace app::classes::types
