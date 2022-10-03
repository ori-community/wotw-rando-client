#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UISoundSettingsAsset {
        namespace {
            app::UISoundSettingsAsset__Class* type_info_ref = nullptr;
        }
        app::UISoundSettingsAsset__Class** type_info = &type_info_ref;
        inline app::UISoundSettingsAsset__Class* get_class() {
            return il2cpp::get_class<app::UISoundSettingsAsset__Class>(type_info, "", "UISoundSettingsAsset");
        }
        inline app::UISoundSettingsAsset* create() {
            return il2cpp::create_object<app::UISoundSettingsAsset>(get_class());
        }
    } // namespace UISoundSettingsAsset
} // namespace app::classes::types
