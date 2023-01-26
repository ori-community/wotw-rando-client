#pragma once
#include <Modloader/app/structs/GroupDeletedEventData.h>
#include <Modloader/app/structs/GroupDeletedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupDeletedEventData {
        inline app::GroupDeletedEventData__Class** type_info() {
            static app::GroupDeletedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupDeletedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupDeletedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupDeletedEventData");
        }
        inline app::GroupDeletedEventData* create() {
            return il2cpp::create_object<app::GroupDeletedEventData>(get_class());
        }
    } // namespace GroupDeletedEventData
} // namespace app::classes::types
