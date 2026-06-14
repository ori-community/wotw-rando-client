#pragma once
#include <Modloader/app/structs/AkCommonPlatformSettings.h>
#include <Modloader/app/structs/AkCommonPlatformSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonPlatformSettings {
        inline app::AkCommonPlatformSettings__Class** type_info() {
            static app::AkCommonPlatformSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCommonPlatformSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCommonPlatformSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonPlatformSettings__Class>(type_info(), "", "AkCommonPlatformSettings");
        }
        inline app::AkCommonPlatformSettings* create() {
            return il2cpp::create_object<app::AkCommonPlatformSettings>(get_class());
        }
    } // namespace AkCommonPlatformSettings
} // namespace app::classes::types
