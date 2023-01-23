#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementReward_c__Class.h>
#include <Modloader/app/structs/XblAchievementReward_c.h>

namespace app::classes::types {
    namespace XblAchievementReward_c {
        inline app::XblAchievementReward_c__Class** type_info = (app::XblAchievementReward_c__Class**)(modloader::win::memory::resolve_rva(0x04713A38));
        inline app::XblAchievementReward_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XblAchievementReward_c__Class>(type_info, "XGamingRuntime", "XblAchievementReward", "<>c");
        }
        inline app::XblAchievementReward_c* create() {
            return il2cpp::create_object<app::XblAchievementReward_c>(get_class());
        }
    } // namespace XblAchievementReward_c
} // namespace app::classes::types
