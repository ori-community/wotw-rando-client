#pragma once
#include <Modloader/app/structs/AkWindowsSettings.h>
#include <Modloader/app/structs/AkWindowsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWindowsSettings {
        inline app::AkWindowsSettings__Class** type_info() {
            static app::AkWindowsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkWindowsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkWindowsSettings__Class* get_class() {
            return il2cpp::get_class<app::AkWindowsSettings__Class>(type_info(), "", "AkWindowsSettings");
        }
        inline app::AkWindowsSettings* create() {
            return il2cpp::create_object<app::AkWindowsSettings>(get_class());
        }
    } // namespace AkWindowsSettings
} // namespace app::classes::types
