#pragma once
#include <Modloader/app/structs/AkBasePlatformSettings.h>
#include <Modloader/app/structs/AkBasePlatformSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBasePlatformSettings {
        inline app::AkBasePlatformSettings__Class** type_info() {
            static app::AkBasePlatformSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkBasePlatformSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkBasePlatformSettings__Class* get_class() {
            return il2cpp::get_class<app::AkBasePlatformSettings__Class>(type_info(), "", "AkBasePlatformSettings");
        }
        inline app::AkBasePlatformSettings* create() {
            return il2cpp::create_object<app::AkBasePlatformSettings>(get_class());
        }
    } // namespace AkBasePlatformSettings
} // namespace app::classes::types
