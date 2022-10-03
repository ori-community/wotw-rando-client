#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementsResultHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementsResultHandle__Class** type_info;
        inline app::XblAchievementsResultHandle__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementsResultHandle__Class>(type_info, "XGamingRuntime", "XblAchievementsResultHandle");
        }
        inline app::XblAchievementsResultHandle* create() {
            return il2cpp::create_object<app::XblAchievementsResultHandle>(get_class());
        }
    } // namespace XblAchievementsResultHandle
} // namespace app::classes::types
