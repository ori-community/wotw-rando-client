#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShopkeeperItem {
        inline app::ShopkeeperItem__Class** type_info = (app::ShopkeeperItem__Class**)(modloader::win::memory::resolve_rva(0x0476D4B8));
        inline app::ShopkeeperItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperItem__Class>(type_info, "", "ShopkeeperItem");
        }
        inline app::ShopkeeperItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ShopkeeperItem__Array>(get_class(), size);
        }
        inline app::ShopkeeperItem__Array* create_array(const std::vector<app::ShopkeeperItem*>& items) {
            return il2cpp::array_new<app::ShopkeeperItem__Array>(get_class(), items);
        }
    } // namespace ShopkeeperItem
} // namespace app::classes::types
