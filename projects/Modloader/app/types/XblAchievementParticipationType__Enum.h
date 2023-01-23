#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementParticipationType__Enum__Class.h>
#include <Modloader/app/structs/XblAchievementParticipationType__Enum.h>

namespace app::classes::types {
    namespace XblAchievementParticipationType__Enum {
        namespace {
            inline app::XblAchievementParticipationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementParticipationType__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementParticipationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementParticipationType__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementParticipationType");
        }
        inline app::XblAchievementParticipationType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementParticipationType__Enum>(get_class());
        }
    } // namespace XblAchievementParticipationType__Enum
} // namespace app::classes::types
