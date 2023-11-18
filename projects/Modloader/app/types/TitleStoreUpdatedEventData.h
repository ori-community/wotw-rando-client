#pragma once
#include <Modloader/app/structs/TitleStoreUpdatedEventData.h>
#include <Modloader/app/structs/TitleStoreUpdatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleStoreUpdatedEventData {
        inline app::TitleStoreUpdatedEventData__Class** type_info() {
            static app::TitleStoreUpdatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleStoreUpdatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleStoreUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleStoreUpdatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleStoreUpdatedEventData");
        }
        inline app::TitleStoreUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleStoreUpdatedEventData>(get_class());
        }
    } // namespace TitleStoreUpdatedEventData
} // namespace app::classes::types
