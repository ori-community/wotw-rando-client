#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShopkeeperScreen_c {
        inline app::ShopkeeperScreen_c__Class** type_info = (app::ShopkeeperScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04788748));
        inline app::ShopkeeperScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShopkeeperScreen_c__Class>(type_info, "", "ShopkeeperScreen", "<>c");
        }
        inline app::ShopkeeperScreen_c* create() {
            return il2cpp::create_object<app::ShopkeeperScreen_c>(get_class());
        }
    } // namespace ShopkeeperScreen_c
} // namespace app::classes::types
