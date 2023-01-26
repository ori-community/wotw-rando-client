#pragma once
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings__Array.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_PlatformSettings {
        inline app::AkWwiseInitializationSettings_PlatformSettings__Class** type_info() {
            static app::AkWwiseInitializationSettings_PlatformSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkWwiseInitializationSettings_PlatformSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_PlatformSettings__Class>(type_info(), "", "AkWwiseInitializationSettings", "PlatformSettings");
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_PlatformSettings>(get_class());
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::AkWwiseInitializationSettings_PlatformSettings__Array>(get_class(), size);
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array* create_array(const std::vector<app::AkWwiseInitializationSettings_PlatformSettings*>& items) {
            return il2cpp::array_new<app::AkWwiseInitializationSettings_PlatformSettings__Array>(get_class(), items);
        }
    } // namespace AkWwiseInitializationSettings_PlatformSettings
} // namespace app::classes::types
