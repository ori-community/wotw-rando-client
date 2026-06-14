#pragma once
#include <Modloader/app/structs/GroupMembersAddedEventData.h>
#include <Modloader/app/structs/GroupMembersAddedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroupMembersAddedEventData {
        inline app::GroupMembersAddedEventData__Class** type_info() {
            static app::GroupMembersAddedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroupMembersAddedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroupMembersAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupMembersAddedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GroupMembersAddedEventData");
        }
        inline app::GroupMembersAddedEventData* create() {
            return il2cpp::create_object<app::GroupMembersAddedEventData>(get_class());
        }
    } // namespace GroupMembersAddedEventData
} // namespace app::classes::types
