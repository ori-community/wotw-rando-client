#pragma once
#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#include <Modloader/app/structs/AkCommonAdvancedSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonAdvancedSettings {
        inline app::AkCommonAdvancedSettings__Class** type_info() {
            static app::AkCommonAdvancedSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCommonAdvancedSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCommonAdvancedSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonAdvancedSettings__Class>(type_info(), "", "AkCommonAdvancedSettings");
        }
        inline app::AkCommonAdvancedSettings* create() {
            return il2cpp::create_object<app::AkCommonAdvancedSettings>(get_class());
        }
    } // namespace AkCommonAdvancedSettings
} // namespace app::classes::types
