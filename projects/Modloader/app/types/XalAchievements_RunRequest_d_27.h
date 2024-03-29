#pragma once
#include <Modloader/app/structs/XalAchievements_RunRequest_d_27.h>
#include <Modloader/app/structs/XalAchievements_RunRequest_d_27__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalAchievements_RunRequest_d_27 {
        inline app::XalAchievements_RunRequest_d_27__Class** type_info() {
            static app::XalAchievements_RunRequest_d_27__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalAchievements_RunRequest_d_27__Class**)(modloader::win::memory::resolve_rva(0x04786EA0));
            }
            return cache;
        }
        inline app::XalAchievements_RunRequest_d_27__Class* get_class() {
            return il2cpp::get_nested_class<app::XalAchievements_RunRequest_d_27__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XalAchievements", "<RunRequest>d__27");
        }
        inline app::XalAchievements_RunRequest_d_27* create() {
            return il2cpp::create_object<app::XalAchievements_RunRequest_d_27>(get_class());
        }
    } // namespace XalAchievements_RunRequest_d_27
} // namespace app::classes::types
