#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserAchievementStored_t_Boolean___Array__Class.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserAchievementStored_t_Boolean___Array.h>

namespace app::classes::types {
    namespace Action_2_Steamworks_UserAchievementStored_t_Boolean___Array {
        namespace {
            inline app::Action_2_Steamworks_UserAchievementStored_t_Boolean___Array__Class* type_info_ref = nullptr;
        }
        inline app::Action_2_Steamworks_UserAchievementStored_t_Boolean___Array__Class** type_info = &type_info_ref;
        inline app::Action_2_Steamworks_UserAchievementStored_t_Boolean___Array__Class* get_class() {
            return il2cpp::get_class<app::Action_2_Steamworks_UserAchievementStored_t_Boolean___Array__Class>(type_info, "System", "Action`2[Steamworks.UserAchievementStored_t,Boolean][]");
        }
        inline app::Action_2_Steamworks_UserAchievementStored_t_Boolean___Array* create() {
            return il2cpp::create_object<app::Action_2_Steamworks_UserAchievementStored_t_Boolean___Array>(get_class());
        }
    } // namespace Action_2_Steamworks_UserAchievementStored_t_Boolean___Array
} // namespace app::classes::types
