#pragma once
#include <Modloader/app/structs/XblAchievementTimeWindow.h>
#include <Modloader/app/structs/XblAchievementTimeWindow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementTimeWindow {
        inline app::XblAchievementTimeWindow__Class** type_info() {
            static app::XblAchievementTimeWindow__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementTimeWindow__Class**)(modloader::win::memory::resolve_rva(0x04720138));
            }
            return cache;
        }
        inline app::XblAchievementTimeWindow__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTimeWindow__Class>(type_info(), "XGamingRuntime", "XblAchievementTimeWindow");
        }
        inline app::XblAchievementTimeWindow* create() {
            return il2cpp::create_object<app::XblAchievementTimeWindow>(get_class());
        }
    } // namespace XblAchievementTimeWindow
} // namespace app::classes::types
