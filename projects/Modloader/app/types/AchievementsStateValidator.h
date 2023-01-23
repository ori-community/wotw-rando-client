#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AchievementsStateValidator__Class.h>
#include <Modloader/app/structs/AchievementsStateValidator.h>

namespace app::classes::types {
    namespace AchievementsStateValidator {
        namespace {
            inline app::AchievementsStateValidator__Class* type_info_ref = nullptr;
        }
        inline app::AchievementsStateValidator__Class** type_info = &type_info_ref;
        inline app::AchievementsStateValidator__Class* get_class() {
            return il2cpp::get_class<app::AchievementsStateValidator__Class>(type_info, "", "AchievementsStateValidator");
        }
        inline app::AchievementsStateValidator* create() {
            return il2cpp::create_object<app::AchievementsStateValidator>(get_class());
        }
    } // namespace AchievementsStateValidator
} // namespace app::classes::types
