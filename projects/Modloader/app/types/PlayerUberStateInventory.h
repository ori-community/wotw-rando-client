#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerUberStateInventory__Class.h>
#include <Modloader/app/structs/PlayerUberStateInventory.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory {
        inline app::PlayerUberStateInventory__Class** type_info = (app::PlayerUberStateInventory__Class**)(modloader::win::memory::resolve_rva(0x0472D860));
        inline app::PlayerUberStateInventory__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateInventory__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateInventory");
        }
        inline app::PlayerUberStateInventory* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory>(get_class());
        }
    } // namespace PlayerUberStateInventory
} // namespace app::classes::types
