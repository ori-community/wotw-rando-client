#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementParticipationType__Enum {
        namespace {
            app::XblAchievementParticipationType__Enum__Class* type_info_ref = nullptr;
        }
        app::XblAchievementParticipationType__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementParticipationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementParticipationType__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementParticipationType");
        }
        inline app::XblAchievementParticipationType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementParticipationType__Enum>(get_class());
        }
    } // namespace XblAchievementParticipationType__Enum
} // namespace app::classes::types
