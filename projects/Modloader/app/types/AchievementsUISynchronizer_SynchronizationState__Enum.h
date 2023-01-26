#pragma once
#include <Modloader/app/structs/AchievementsUISynchronizer_SynchronizationState__Enum.h>
#include <Modloader/app/structs/AchievementsUISynchronizer_SynchronizationState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUISynchronizer_SynchronizationState__Enum {
        inline app::AchievementsUISynchronizer_SynchronizationState__Enum__Class** type_info() {
            static app::AchievementsUISynchronizer_SynchronizationState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsUISynchronizer_SynchronizationState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsUISynchronizer_SynchronizationState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsUISynchronizer_SynchronizationState__Enum__Class>(type_info(), "", "AchievementsUISynchronizer", "SynchronizationState");
        }
        inline app::AchievementsUISynchronizer_SynchronizationState__Enum* create() {
            return il2cpp::create_object<app::AchievementsUISynchronizer_SynchronizationState__Enum>(get_class());
        }
    } // namespace AchievementsUISynchronizer_SynchronizationState__Enum
} // namespace app::classes::types
