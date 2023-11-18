#pragma once
#include <Modloader/app/structs/XblAchievementProgressState__Enum.h>
#include <Modloader/app/structs/XblAchievementProgressState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementProgressState__Enum {
        inline app::XblAchievementProgressState__Enum__Class** type_info() {
            static app::XblAchievementProgressState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementProgressState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementProgressState__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementProgressState__Enum__Class>(type_info(), "XGamingRuntime", "XblAchievementProgressState");
        }
        inline app::XblAchievementProgressState__Enum* create() {
            return il2cpp::create_object<app::XblAchievementProgressState__Enum>(get_class());
        }
    } // namespace XblAchievementProgressState__Enum
} // namespace app::classes::types
