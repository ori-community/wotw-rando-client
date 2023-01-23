#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementReward__Array__Class.h>
#include <Modloader/app/structs/XblAchievementReward__Array.h>

namespace app::classes::types {
    namespace XblAchievementReward__Array {
        namespace {
            inline app::XblAchievementReward__Array__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementReward__Array__Class** type_info = &type_info_ref;
        inline app::XblAchievementReward__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementReward__Array__Class>(type_info, "XGamingRuntime", "XblAchievementReward[]");
        }
        inline app::XblAchievementReward__Array* create() {
            return il2cpp::create_object<app::XblAchievementReward__Array>(get_class());
        }
    } // namespace XblAchievementReward__Array
} // namespace app::classes::types
