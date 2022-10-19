#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TenacyConnectorOnboardEventData {
        namespace {
            inline app::TenacyConnectorOnboardEventData__Class* type_info_ref = nullptr;
        }
        inline app::TenacyConnectorOnboardEventData__Class** type_info = &type_info_ref;
        inline app::TenacyConnectorOnboardEventData__Class* get_class() {
            return il2cpp::get_class<app::TenacyConnectorOnboardEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TenacyConnectorOnboardEventData");
        }
        inline app::TenacyConnectorOnboardEventData* create() {
            return il2cpp::create_object<app::TenacyConnectorOnboardEventData>(get_class());
        }
    } // namespace TenacyConnectorOnboardEventData
} // namespace app::classes::types
