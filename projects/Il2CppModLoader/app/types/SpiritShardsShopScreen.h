#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardsShopScreen {
        inline app::SpiritShardsShopScreen__Class** type_info = (app::SpiritShardsShopScreen__Class**)(modloader::win::memory::resolve_rva(0x0475A150));
        inline app::SpiritShardsShopScreen__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardsShopScreen__Class>(type_info, "", "SpiritShardsShopScreen");
        }
        inline app::SpiritShardsShopScreen* create() {
            return il2cpp::create_object<app::SpiritShardsShopScreen>(get_class());
        }
    } // namespace SpiritShardsShopScreen
} // namespace app::classes::types
