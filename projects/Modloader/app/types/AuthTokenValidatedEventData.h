#pragma once
#include <Modloader/app/structs/AuthTokenValidatedEventData.h>
#include <Modloader/app/structs/AuthTokenValidatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthTokenValidatedEventData {
        inline app::AuthTokenValidatedEventData__Class** type_info() {
            static app::AuthTokenValidatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthTokenValidatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthTokenValidatedEventData__Class* get_class() {
            return il2cpp::get_class<app::AuthTokenValidatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "AuthTokenValidatedEventData");
        }
        inline app::AuthTokenValidatedEventData* create() {
            return il2cpp::create_object<app::AuthTokenValidatedEventData>(get_class());
        }
    } // namespace AuthTokenValidatedEventData
} // namespace app::classes::types
