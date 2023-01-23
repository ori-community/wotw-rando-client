#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShopkeeperItem__Array__Class.h>
#include <Modloader/app/structs/ShopkeeperItem__Array.h>

namespace app::classes::types {
    namespace ShopkeeperItem__Array {
        inline app::ShopkeeperItem__Array__Class** type_info = (app::ShopkeeperItem__Array__Class**)(modloader::win::memory::resolve_rva(0x047445C8));
        inline app::ShopkeeperItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperItem__Array__Class>(type_info, "", "ShopkeeperItem[]");
        }
        inline app::ShopkeeperItem__Array* create() {
            return il2cpp::create_object<app::ShopkeeperItem__Array>(get_class());
        }
    } // namespace ShopkeeperItem__Array
} // namespace app::classes::types
