#pragma once
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings.h>
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkUnityPlatformSpecificSettings {
        inline app::AkUnityPlatformSpecificSettings__Class** type_info() {
            static app::AkUnityPlatformSpecificSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkUnityPlatformSpecificSettings__Class**)(modloader::win::memory::resolve_rva(0x0476EEA0));
            }
            return cache;
        }
        inline app::AkUnityPlatformSpecificSettings__Class* get_class() {
            return il2cpp::get_class<app::AkUnityPlatformSpecificSettings__Class>(type_info(), "", "AkUnityPlatformSpecificSettings");
        }
        inline app::AkUnityPlatformSpecificSettings* create() {
            return il2cpp::create_object<app::AkUnityPlatformSpecificSettings>(get_class());
        }
    } // namespace AkUnityPlatformSpecificSettings
} // namespace app::classes::types
