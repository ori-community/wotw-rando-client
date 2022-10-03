#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalAchievements_RunRequest_d_27 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalAchievements_RunRequest_d_27__Class** type_info;
        inline app::XalAchievements_RunRequest_d_27__Class* get_class() {
            return il2cpp::get_nested_class<app::XalAchievements_RunRequest_d_27__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XalAchievements", "<RunRequest>d__27");
        }
        inline app::XalAchievements_RunRequest_d_27* create() {
            return il2cpp::create_object<app::XalAchievements_RunRequest_d_27>(get_class());
        }
    } // namespace XalAchievements_RunRequest_d_27
} // namespace app::classes::types
