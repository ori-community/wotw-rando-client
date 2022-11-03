#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserAchievementStoredCallback {
        inline app::UserAchievementStoredCallback__Class** type_info = (app::UserAchievementStoredCallback__Class**)(modloader::win::memory::resolve_rva(0x04797010));
        inline app::UserAchievementStoredCallback__Class* get_class() {
            return il2cpp::get_class<app::UserAchievementStoredCallback__Class>(type_info, "Steamworks", "UserAchievementStoredCallback");
        }
        inline app::UserAchievementStoredCallback* create() {
            return il2cpp::create_object<app::UserAchievementStoredCallback>(get_class());
        }
    } // namespace UserAchievementStoredCallback
} // namespace app::classes::types
