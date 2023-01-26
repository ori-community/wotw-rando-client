#pragma once
#include <Modloader/app/structs/ShopkeeperItem.h>
#include <Modloader/app/structs/ShopkeeperItem__Array.h>
#include <Modloader/app/structs/ShopkeeperItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperItem {
        inline app::ShopkeeperItem__Class** type_info() {
            static app::ShopkeeperItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShopkeeperItem__Class**)(modloader::win::memory::resolve_rva(0x0476D4B8));
            }
            return cache;
        }
        inline app::ShopkeeperItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperItem__Class>(type_info(), "", "ShopkeeperItem");
        }
        inline app::ShopkeeperItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ShopkeeperItem__Array>(get_class(), size);
        }
        inline app::ShopkeeperItem__Array* create_array(const std::vector<app::ShopkeeperItem*>& items) {
            return il2cpp::array_new<app::ShopkeeperItem__Array>(get_class(), items);
        }
    } // namespace ShopkeeperItem
} // namespace app::classes::types
