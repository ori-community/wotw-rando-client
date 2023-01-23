#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AchievementsTestMessageProvider_GetMessages_d_2__Class.h>
#include <Modloader/app/structs/AchievementsTestMessageProvider_GetMessages_d_2.h>

namespace app::classes::types {
    namespace AchievementsTestMessageProvider_GetMessages_d_2 {
        inline app::AchievementsTestMessageProvider_GetMessages_d_2__Class** type_info = (app::AchievementsTestMessageProvider_GetMessages_d_2__Class**)(modloader::win::memory::resolve_rva(0x04782960));
        inline app::AchievementsTestMessageProvider_GetMessages_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsTestMessageProvider_GetMessages_d_2__Class>(type_info, "", "AchievementsTestMessageProvider", "<GetMessages>d__2");
        }
        inline app::AchievementsTestMessageProvider_GetMessages_d_2* create() {
            return il2cpp::create_object<app::AchievementsTestMessageProvider_GetMessages_d_2>(get_class());
        }
    } // namespace AchievementsTestMessageProvider_GetMessages_d_2
} // namespace app::classes::types
