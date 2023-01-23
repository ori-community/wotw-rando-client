#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AchievementsUISynchronizer_SynchronizationState__Enum__Class.h>
#include <Modloader/app/structs/AchievementsUISynchronizer_SynchronizationState__Enum.h>

namespace app::classes::types {
    namespace AchievementsUISynchronizer_SynchronizationState__Enum {
        namespace {
            inline app::AchievementsUISynchronizer_SynchronizationState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AchievementsUISynchronizer_SynchronizationState__Enum__Class** type_info = &type_info_ref;
        inline app::AchievementsUISynchronizer_SynchronizationState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsUISynchronizer_SynchronizationState__Enum__Class>(type_info, "", "AchievementsUISynchronizer", "SynchronizationState");
        }
        inline app::AchievementsUISynchronizer_SynchronizationState__Enum* create() {
            return il2cpp::create_object<app::AchievementsUISynchronizer_SynchronizationState__Enum>(get_class());
        }
    } // namespace AchievementsUISynchronizer_SynchronizationState__Enum
} // namespace app::classes::types
