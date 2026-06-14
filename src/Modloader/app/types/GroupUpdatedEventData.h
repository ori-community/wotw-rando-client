#pragma once
#include <Modloader/app/structs/GroupUpdatedEventData.h>
#include <Modloader/app/structs/GroupUpdatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupUpdatedEventData {
        inline app::GroupUpdatedEventData__Class** type_info() {
            static app::GroupUpdatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupUpdatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupUpdatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupUpdatedEventData");
        }
        inline app::GroupUpdatedEventData* create() {
            return il2cpp::create_object<app::GroupUpdatedEventData>(get_class());
        }
    } // namespace GroupUpdatedEventData
} // namespace app::classes::types
