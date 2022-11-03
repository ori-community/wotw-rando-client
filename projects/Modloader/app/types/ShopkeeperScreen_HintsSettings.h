#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShopkeeperScreen_HintsSettings {
        namespace {
            inline app::ShopkeeperScreen_HintsSettings__Class* type_info_ref = nullptr;
        }
        inline app::ShopkeeperScreen_HintsSettings__Class** type_info = &type_info_ref;
        inline app::ShopkeeperScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ShopkeeperScreen_HintsSettings__Class>(type_info, "", "ShopkeeperScreen", "HintsSettings");
        }
        inline app::ShopkeeperScreen_HintsSettings* create() {
            return il2cpp::create_object<app::ShopkeeperScreen_HintsSettings>(get_class());
        }
        inline app::ShopkeeperScreen_HintsSettings__Boxed* box(app::ShopkeeperScreen_HintsSettings value) {
            return il2cpp::box_value<app::ShopkeeperScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace ShopkeeperScreen_HintsSettings
} // namespace app::classes::types
