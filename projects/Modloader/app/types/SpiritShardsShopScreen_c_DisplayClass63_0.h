#pragma once
#include <Modloader/app/structs/SpiritShardsShopScreen_c_DisplayClass63_0.h>
#include <Modloader/app/structs/SpiritShardsShopScreen_c_DisplayClass63_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsShopScreen_c_DisplayClass63_0 {
        inline app::SpiritShardsShopScreen_c_DisplayClass63_0__Class** type_info() {
            static app::SpiritShardsShopScreen_c_DisplayClass63_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardsShopScreen_c_DisplayClass63_0__Class**)(modloader::win::memory::resolve_rva(0x0474C928));
            }
            return cache;
        }
        inline app::SpiritShardsShopScreen_c_DisplayClass63_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsShopScreen_c_DisplayClass63_0__Class>(type_info(), "", "SpiritShardsShopScreen", "<>c__DisplayClass63_0");
        }
        inline app::SpiritShardsShopScreen_c_DisplayClass63_0* create() {
            return il2cpp::create_object<app::SpiritShardsShopScreen_c_DisplayClass63_0>(get_class());
        }
    } // namespace SpiritShardsShopScreen_c_DisplayClass63_0
} // namespace app::classes::types
