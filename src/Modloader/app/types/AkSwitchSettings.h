#pragma once
#include <Modloader/app/structs/AkSwitchSettings.h>
#include <Modloader/app/structs/AkSwitchSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSwitchSettings {
        inline app::AkSwitchSettings__Class** type_info() {
            static app::AkSwitchSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkSwitchSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkSwitchSettings__Class* get_class() {
            return il2cpp::get_class<app::AkSwitchSettings__Class>(type_info(), "", "AkSwitchSettings");
        }
        inline app::AkSwitchSettings* create() {
            return il2cpp::create_object<app::AkSwitchSettings>(get_class());
        }
    } // namespace AkSwitchSettings
} // namespace app::classes::types
