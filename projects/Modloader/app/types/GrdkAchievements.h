#pragma once
#include <Modloader/app/structs/GrdkAchievements.h>
#include <Modloader/app/structs/GrdkAchievements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrdkAchievements {
        inline app::GrdkAchievements__Class** type_info() {
            static app::GrdkAchievements__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrdkAchievements__Class**)(modloader::win::memory::resolve_rva(0x04724C98));
            }
            return cache;
        }
        inline app::GrdkAchievements__Class* get_class() {
            return il2cpp::get_class<app::GrdkAchievements__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "GrdkAchievements");
        }
        inline app::GrdkAchievements* create() {
            return il2cpp::create_object<app::GrdkAchievements>(get_class());
        }
    } // namespace GrdkAchievements
} // namespace app::classes::types
