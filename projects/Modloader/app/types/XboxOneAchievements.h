#pragma once
#include <Modloader/app/structs/XboxOneAchievements.h>
#include <Modloader/app/structs/XboxOneAchievements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneAchievements {
        inline app::XboxOneAchievements__Class** type_info() {
            static app::XboxOneAchievements__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneAchievements__Class**)(modloader::win::memory::resolve_rva(0x04722CC8));
            }
            return cache;
        }
        inline app::XboxOneAchievements__Class* get_class() {
            return il2cpp::get_class<app::XboxOneAchievements__Class>(type_info(), "", "XboxOneAchievements");
        }
        inline app::XboxOneAchievements* create() {
            return il2cpp::create_object<app::XboxOneAchievements>(get_class());
        }
    } // namespace XboxOneAchievements
} // namespace app::classes::types
