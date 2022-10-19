#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementDatabase {
        namespace {
            inline app::AchievementDatabase__Class* type_info_ref = nullptr;
        }
        inline app::AchievementDatabase__Class** type_info = &type_info_ref;
        inline app::AchievementDatabase__Class* get_class() {
            return il2cpp::get_class<app::AchievementDatabase__Class>(type_info, "", "AchievementDatabase");
        }
        inline app::AchievementDatabase* create() {
            return il2cpp::create_object<app::AchievementDatabase>(get_class());
        }
    } // namespace AchievementDatabase
} // namespace app::classes::types
