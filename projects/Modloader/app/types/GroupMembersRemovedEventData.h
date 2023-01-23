#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupMembersRemovedEventData__Class.h>
#include <Modloader/app/structs/GroupMembersRemovedEventData.h>

namespace app::classes::types {
    namespace GroupMembersRemovedEventData {
        namespace {
            inline app::GroupMembersRemovedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GroupMembersRemovedEventData__Class** type_info = &type_info_ref;
        inline app::GroupMembersRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupMembersRemovedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupMembersRemovedEventData");
        }
        inline app::GroupMembersRemovedEventData* create() {
            return il2cpp::create_object<app::GroupMembersRemovedEventData>(get_class());
        }
    } // namespace GroupMembersRemovedEventData
} // namespace app::classes::types
