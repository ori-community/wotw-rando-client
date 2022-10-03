#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUIItem_Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardShopUIItem_Context__Class** type_info;
        inline app::SpiritShardShopUIItem_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardShopUIItem_Context__Class>(type_info, "", "SpiritShardShopUIItem", "Context");
        }
        inline app::SpiritShardShopUIItem_Context* create() {
            return il2cpp::create_object<app::SpiritShardShopUIItem_Context>(get_class());
        }
    } // namespace SpiritShardShopUIItem_Context
} // namespace app::classes::types
