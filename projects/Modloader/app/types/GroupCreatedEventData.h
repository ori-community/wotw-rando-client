#pragma once
#include <Modloader/app/structs/GroupCreatedEventData.h>
#include <Modloader/app/structs/GroupCreatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupCreatedEventData {
        inline app::GroupCreatedEventData__Class** type_info() {
            static app::GroupCreatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupCreatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupCreatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupCreatedEventData");
        }
        inline app::GroupCreatedEventData* create() {
            return il2cpp::create_object<app::GroupCreatedEventData>(get_class());
        }
    } // namespace GroupCreatedEventData
} // namespace app::classes::types
