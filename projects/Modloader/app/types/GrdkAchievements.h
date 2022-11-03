#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrdkAchievements {
        inline app::GrdkAchievements__Class** type_info = (app::GrdkAchievements__Class**)(modloader::win::memory::resolve_rva(0x04724C98));
        inline app::GrdkAchievements__Class* get_class() {
            return il2cpp::get_class<app::GrdkAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "GrdkAchievements");
        }
        inline app::GrdkAchievements* create() {
            return il2cpp::create_object<app::GrdkAchievements>(get_class());
        }
    } // namespace GrdkAchievements
} // namespace app::classes::types
