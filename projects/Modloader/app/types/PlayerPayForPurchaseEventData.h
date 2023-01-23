#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerPayForPurchaseEventData__Class.h>
#include <Modloader/app/structs/PlayerPayForPurchaseEventData.h>

namespace app::classes::types {
    namespace PlayerPayForPurchaseEventData {
        namespace {
            inline app::PlayerPayForPurchaseEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerPayForPurchaseEventData__Class** type_info = &type_info_ref;
        inline app::PlayerPayForPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPayForPurchaseEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerPayForPurchaseEventData");
        }
        inline app::PlayerPayForPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerPayForPurchaseEventData>(get_class());
        }
    } // namespace PlayerPayForPurchaseEventData
} // namespace app::classes::types
