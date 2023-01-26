#pragma once
#include <Modloader/app/structs/XblAchievementType__Enum.h>
#include <Modloader/app/structs/XblAchievementType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementType__Enum {
        inline app::XblAchievementType__Enum__Class** type_info() {
            static app::XblAchievementType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementType__Enum__Class>(type_info(), "XGamingRuntime", "XblAchievementType");
        }
        inline app::XblAchievementType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementType__Enum>(get_class());
        }
    } // namespace XblAchievementType__Enum
} // namespace app::classes::types
