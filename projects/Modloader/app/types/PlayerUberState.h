#pragma once
#include <Modloader/app/structs/PlayerUberState.h>
#include <Modloader/app/structs/PlayerUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberState {
        inline app::PlayerUberState__Class** type_info() {
            static app::PlayerUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberState__Class**)(modloader::win::memory::resolve_rva(0x04703AF8));
            }
            return cache;
        }
        inline app::PlayerUberState__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberState__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberState");
        }
        inline app::PlayerUberState* create() {
            return il2cpp::create_object<app::PlayerUberState>(get_class());
        }
    } // namespace PlayerUberState
} // namespace app::classes::types
