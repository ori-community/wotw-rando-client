#pragma once
#include <Modloader/app/structs/PlayerUberStateInventory.h>
#include <Modloader/app/structs/PlayerUberStateInventory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory {
        inline app::PlayerUberStateInventory__Class** type_info() {
            static app::PlayerUberStateInventory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateInventory__Class**)(modloader::win::memory::resolve_rva(0x0472D860));
            }
            return cache;
        }
        inline app::PlayerUberStateInventory__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateInventory__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateInventory");
        }
        inline app::PlayerUberStateInventory* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory>(get_class());
        }
    } // namespace PlayerUberStateInventory
} // namespace app::classes::types
