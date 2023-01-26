#pragma once
#include <Modloader/app/structs/IsSwitchWithFriendSyncCondition.h>
#include <Modloader/app/structs/IsSwitchWithFriendSyncCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsSwitchWithFriendSyncCondition {
        inline app::IsSwitchWithFriendSyncCondition__Class** type_info() {
            static app::IsSwitchWithFriendSyncCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsSwitchWithFriendSyncCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsSwitchWithFriendSyncCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSwitchWithFriendSyncCondition__Class>(type_info(), "", "IsSwitchWithFriendSyncCondition");
        }
        inline app::IsSwitchWithFriendSyncCondition* create() {
            return il2cpp::create_object<app::IsSwitchWithFriendSyncCondition>(get_class());
        }
    } // namespace IsSwitchWithFriendSyncCondition
} // namespace app::classes::types
