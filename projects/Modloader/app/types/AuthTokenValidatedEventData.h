#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthTokenValidatedEventData {
        namespace {
            inline app::AuthTokenValidatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::AuthTokenValidatedEventData__Class** type_info = &type_info_ref;
        inline app::AuthTokenValidatedEventData__Class* get_class() {
            return il2cpp::get_class<app::AuthTokenValidatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "AuthTokenValidatedEventData");
        }
        inline app::AuthTokenValidatedEventData* create() {
            return il2cpp::create_object<app::AuthTokenValidatedEventData>(get_class());
        }
    } // namespace AuthTokenValidatedEventData
} // namespace app::classes::types
