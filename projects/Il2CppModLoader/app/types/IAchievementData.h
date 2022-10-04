#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAchievementData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAchievementData__Class** type_info;
        inline app::IAchievementData__Class* get_class() {
            return il2cpp::get_class<app::IAchievementData__Class>(type_info, "", "IAchievementData");
        }
        inline app::IAchievementData* create() {
            return il2cpp::create_object<app::IAchievementData>(get_class());
        }
    } // namespace IAchievementData
} // namespace app::classes::types
