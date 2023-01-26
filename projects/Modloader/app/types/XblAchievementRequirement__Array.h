#pragma once
#include <Modloader/app/structs/XblAchievementRequirement__Array.h>
#include <Modloader/app/structs/XblAchievementRequirement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementRequirement__Array {
        inline app::XblAchievementRequirement__Array__Class** type_info() {
            static app::XblAchievementRequirement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementRequirement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementRequirement__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementRequirement__Array__Class>(type_info(), "XGamingRuntime", "XblAchievementRequirement[]");
        }
        inline app::XblAchievementRequirement__Array* create() {
            return il2cpp::create_object<app::XblAchievementRequirement__Array>(get_class());
        }
    } // namespace XblAchievementRequirement__Array
} // namespace app::classes::types
