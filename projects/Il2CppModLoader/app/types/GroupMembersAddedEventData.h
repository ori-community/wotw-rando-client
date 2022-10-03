#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupMembersAddedEventData {
        namespace {
            app::GroupMembersAddedEventData__Class* type_info_ref = nullptr;
        }
        app::GroupMembersAddedEventData__Class** type_info = &type_info_ref;
        inline app::GroupMembersAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupMembersAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupMembersAddedEventData");
        }
        inline app::GroupMembersAddedEventData* create() {
            return il2cpp::create_object<app::GroupMembersAddedEventData>(get_class());
        }
    } // namespace GroupMembersAddedEventData
} // namespace app::classes::types
