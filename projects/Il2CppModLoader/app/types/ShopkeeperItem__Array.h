#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperItem__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShopkeeperItem__Array__Class** type_info;
        inline app::ShopkeeperItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperItem__Array__Class>(type_info, "", "ShopkeeperItem[]");
        }
        inline app::ShopkeeperItem__Array* create() {
            return il2cpp::create_object<app::ShopkeeperItem__Array>(get_class());
        }
    } // namespace ShopkeeperItem__Array
} // namespace app::classes::types
