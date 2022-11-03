#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerInventory_c {
        inline app::PlayerInventory_c__Class** type_info = (app::PlayerInventory_c__Class**)(modloader::win::memory::resolve_rva(0x0470A508));
        inline app::PlayerInventory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInventory_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PlayerInventory", "<>c");
        }
        inline app::PlayerInventory_c* create() {
            return il2cpp::create_object<app::PlayerInventory_c>(get_class());
        }
    } // namespace PlayerInventory_c
} // namespace app::classes::types
