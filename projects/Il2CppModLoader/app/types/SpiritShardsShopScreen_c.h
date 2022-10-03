#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsShopScreen_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardsShopScreen_c__Class** type_info;
        inline app::SpiritShardsShopScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsShopScreen_c__Class>(type_info, "", "SpiritShardsShopScreen", "<>c");
        }
        inline app::SpiritShardsShopScreen_c* create() {
            return il2cpp::create_object<app::SpiritShardsShopScreen_c>(get_class());
        }
    } // namespace SpiritShardsShopScreen_c
} // namespace app::classes::types
