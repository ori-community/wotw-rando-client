#pragma once
#include <Modloader/app/structs/SpiritShardsShopScreen_HintsSettings.h>
#include <Modloader/app/structs/SpiritShardsShopScreen_HintsSettings__Boxed.h>
#include <Modloader/app/structs/SpiritShardsShopScreen_HintsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsShopScreen_HintsSettings {
        inline app::SpiritShardsShopScreen_HintsSettings__Class** type_info() {
            static app::SpiritShardsShopScreen_HintsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardsShopScreen_HintsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardsShopScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsShopScreen_HintsSettings__Class>(type_info(), "", "SpiritShardsShopScreen", "HintsSettings");
        }
        inline app::SpiritShardsShopScreen_HintsSettings* create() {
            return il2cpp::create_object<app::SpiritShardsShopScreen_HintsSettings>(get_class());
        }
        inline app::SpiritShardsShopScreen_HintsSettings__Boxed* box(app::SpiritShardsShopScreen_HintsSettings value) {
            return il2cpp::box_value<app::SpiritShardsShopScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace SpiritShardsShopScreen_HintsSettings
} // namespace app::classes::types
