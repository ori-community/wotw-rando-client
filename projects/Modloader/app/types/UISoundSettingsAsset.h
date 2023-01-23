#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UISoundSettingsAsset__Class.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>

namespace app::classes::types {
    namespace UISoundSettingsAsset {
        namespace {
            inline app::UISoundSettingsAsset__Class* type_info_ref = nullptr;
        }
        inline app::UISoundSettingsAsset__Class** type_info = &type_info_ref;
        inline app::UISoundSettingsAsset__Class* get_class() {
            return il2cpp::get_class<app::UISoundSettingsAsset__Class>(type_info, "", "UISoundSettingsAsset");
        }
        inline app::UISoundSettingsAsset* create() {
            return il2cpp::create_object<app::UISoundSettingsAsset>(get_class());
        }
    } // namespace UISoundSettingsAsset
} // namespace app::classes::types
