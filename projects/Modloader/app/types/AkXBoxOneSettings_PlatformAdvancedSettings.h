#pragma once
#include <Modloader/app/structs/AkXBoxOneSettings_PlatformAdvancedSettings.h>
#include <Modloader/app/structs/AkXBoxOneSettings_PlatformAdvancedSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkXBoxOneSettings_PlatformAdvancedSettings {
        inline app::AkXBoxOneSettings_PlatformAdvancedSettings__Class** type_info() {
            static app::AkXBoxOneSettings_PlatformAdvancedSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkXBoxOneSettings_PlatformAdvancedSettings__Class**)(modloader::win::memory::resolve_rva(0x0472B0C0));
            }
            return cache;
        }
        inline app::AkXBoxOneSettings_PlatformAdvancedSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkXBoxOneSettings_PlatformAdvancedSettings__Class>(type_info(), "", "AkXBoxOneSettings", "PlatformAdvancedSettings");
        }
        inline app::AkXBoxOneSettings_PlatformAdvancedSettings* create() {
            return il2cpp::create_object<app::AkXBoxOneSettings_PlatformAdvancedSettings>(get_class());
        }
    } // namespace AkXBoxOneSettings_PlatformAdvancedSettings
} // namespace app::classes::types
