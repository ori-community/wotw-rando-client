#pragma once
#include <Modloader/app/structs/XblAchievementParticipationType__Enum.h>
#include <Modloader/app/structs/XblAchievementParticipationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementParticipationType__Enum {
        inline app::XblAchievementParticipationType__Enum__Class** type_info() {
            static app::XblAchievementParticipationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementParticipationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementParticipationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementParticipationType__Enum__Class>(type_info(), "XGamingRuntime", "XblAchievementParticipationType");
        }
        inline app::XblAchievementParticipationType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementParticipationType__Enum>(get_class());
        }
    } // namespace XblAchievementParticipationType__Enum
} // namespace app::classes::types
