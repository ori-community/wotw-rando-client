#pragma once
#include <Modloader/app/structs/PlayerInventory_c.h>
#include <Modloader/app/structs/PlayerInventory_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInventory_c {
        inline app::PlayerInventory_c__Class** type_info() {
            static app::PlayerInventory_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerInventory_c__Class**)(modloader::win::memory::resolve_rva(0x0470A508));
            }
            return cache;
        }
        inline app::PlayerInventory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInventory_c__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PlayerInventory", "<>c");
        }
        inline app::PlayerInventory_c* create() {
            return il2cpp::create_object<app::PlayerInventory_c>(get_class());
        }
    } // namespace PlayerInventory_c
} // namespace app::classes::types
