#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementTimeWindow {
        inline app::XblAchievementTimeWindow__Class** type_info = (app::XblAchievementTimeWindow__Class**)(modloader::win::memory::resolve_rva(0x04720138));
        inline app::XblAchievementTimeWindow__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTimeWindow__Class>(type_info, "XGamingRuntime", "XblAchievementTimeWindow");
        }
        inline app::XblAchievementTimeWindow* create() {
            return il2cpp::create_object<app::XblAchievementTimeWindow>(get_class());
        }
    } // namespace XblAchievementTimeWindow
} // namespace app::classes::types
