#pragma once
#include <Modloader/app/structs/TenacyConnectorOnboardEventData.h>
#include <Modloader/app/structs/TenacyConnectorOnboardEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TenacyConnectorOnboardEventData {
        inline app::TenacyConnectorOnboardEventData__Class** type_info() {
            static app::TenacyConnectorOnboardEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TenacyConnectorOnboardEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TenacyConnectorOnboardEventData__Class* get_class() {
            return il2cpp::get_class<app::TenacyConnectorOnboardEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TenacyConnectorOnboardEventData");
        }
        inline app::TenacyConnectorOnboardEventData* create() {
            return il2cpp::create_object<app::TenacyConnectorOnboardEventData>(get_class());
        }
    } // namespace TenacyConnectorOnboardEventData
} // namespace app::classes::types
