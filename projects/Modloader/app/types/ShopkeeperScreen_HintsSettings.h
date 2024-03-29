#pragma once
#include <Modloader/app/structs/ShopkeeperScreen_HintsSettings.h>
#include <Modloader/app/structs/ShopkeeperScreen_HintsSettings__Boxed.h>
#include <Modloader/app/structs/ShopkeeperScreen_HintsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperScreen_HintsSettings {
        inline app::ShopkeeperScreen_HintsSettings__Class** type_info() {
            static app::ShopkeeperScreen_HintsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShopkeeperScreen_HintsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShopkeeperScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ShopkeeperScreen_HintsSettings__Class>(type_info(), "", "ShopkeeperScreen", "HintsSettings");
        }
        inline app::ShopkeeperScreen_HintsSettings* create() {
            return il2cpp::create_object<app::ShopkeeperScreen_HintsSettings>(get_class());
        }
        inline app::ShopkeeperScreen_HintsSettings__Boxed* box(app::ShopkeeperScreen_HintsSettings value) {
            return il2cpp::box_value<app::ShopkeeperScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace ShopkeeperScreen_HintsSettings
} // namespace app::classes::types
