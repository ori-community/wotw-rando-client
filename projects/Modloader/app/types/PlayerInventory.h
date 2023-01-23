#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerInventory__Class.h>
#include <Modloader/app/structs/PlayerInventory.h>

namespace app::classes::types {
    namespace PlayerInventory {
        inline app::PlayerInventory__Class** type_info = (app::PlayerInventory__Class**)(modloader::win::memory::resolve_rva(0x04711030));
        inline app::PlayerInventory__Class* get_class() {
            return il2cpp::get_class<app::PlayerInventory__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PlayerInventory");
        }
        inline app::PlayerInventory* create() {
            return il2cpp::create_object<app::PlayerInventory>(get_class());
        }
    } // namespace PlayerInventory
} // namespace app::classes::types
