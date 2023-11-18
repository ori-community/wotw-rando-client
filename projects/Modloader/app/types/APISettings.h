#pragma once
#include <Modloader/app/structs/APISettings.h>
#include <Modloader/app/structs/APISettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace APISettings {
        inline app::APISettings__Class** type_info() {
            static app::APISettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::APISettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::APISettings__Class* get_class() {
            return il2cpp::get_class<app::APISettings__Class>(type_info(), "PlayFab.PlayStreamModels", "APISettings");
        }
        inline app::APISettings* create() {
            return il2cpp::create_object<app::APISettings>(get_class());
        }
    } // namespace APISettings
} // namespace app::classes::types
