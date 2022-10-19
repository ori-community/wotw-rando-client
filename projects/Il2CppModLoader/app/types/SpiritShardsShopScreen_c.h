#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardsShopScreen_c {
        inline app::SpiritShardsShopScreen_c__Class** type_info = (app::SpiritShardsShopScreen_c__Class**)(modloader::win::memory::resolve_rva(0x0477FD28));
        inline app::SpiritShardsShopScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsShopScreen_c__Class>(type_info, "", "SpiritShardsShopScreen", "<>c");
        }
        inline app::SpiritShardsShopScreen_c* create() {
            return il2cpp::create_object<app::SpiritShardsShopScreen_c>(get_class());
        }
    } // namespace SpiritShardsShopScreen_c
} // namespace app::classes::types
