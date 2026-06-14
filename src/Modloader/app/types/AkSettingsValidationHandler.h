#pragma once
#include <Modloader/app/structs/AkSettingsValidationHandler.h>
#include <Modloader/app/structs/AkSettingsValidationHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSettingsValidationHandler {
        inline app::AkSettingsValidationHandler__Class** type_info() {
            static app::AkSettingsValidationHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkSettingsValidationHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkSettingsValidationHandler__Class* get_class() {
            return il2cpp::get_class<app::AkSettingsValidationHandler__Class>(type_info(), "", "AkSettingsValidationHandler");
        }
        inline app::AkSettingsValidationHandler* create() {
            return il2cpp::create_object<app::AkSettingsValidationHandler>(get_class());
        }
    } // namespace AkSettingsValidationHandler
} // namespace app::classes::types
