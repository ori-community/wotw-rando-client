#pragma once
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#include <Modloader/app/structs/UISoundSettingsAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UISoundSettingsAsset {
        inline app::UISoundSettingsAsset__Class** type_info() {
            static app::UISoundSettingsAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UISoundSettingsAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UISoundSettingsAsset__Class* get_class() {
            return il2cpp::get_class<app::UISoundSettingsAsset__Class>(type_info(), "", "UISoundSettingsAsset");
        }
        inline app::UISoundSettingsAsset* create() {
            return il2cpp::create_object<app::UISoundSettingsAsset>(get_class());
        }
    } // namespace UISoundSettingsAsset
} // namespace app::classes::types
