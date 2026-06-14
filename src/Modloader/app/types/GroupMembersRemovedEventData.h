#pragma once
#include <Modloader/app/structs/GroupMembersRemovedEventData.h>
#include <Modloader/app/structs/GroupMembersRemovedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupMembersRemovedEventData {
        inline app::GroupMembersRemovedEventData__Class** type_info() {
            static app::GroupMembersRemovedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupMembersRemovedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupMembersRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupMembersRemovedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupMembersRemovedEventData");
        }
        inline app::GroupMembersRemovedEventData* create() {
            return il2cpp::create_object<app::GroupMembersRemovedEventData>(get_class());
        }
    } // namespace GroupMembersRemovedEventData
} // namespace app::classes::types
