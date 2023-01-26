#pragma once
#include <Modloader/app/structs/UserAchievementStoredCallback.h>
#include <Modloader/app/structs/UserAchievementStoredCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserAchievementStoredCallback {
        inline app::UserAchievementStoredCallback__Class** type_info() {
            static app::UserAchievementStoredCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserAchievementStoredCallback__Class**)(modloader::win::memory::resolve_rva(0x04797010));
            }
            return cache;
        }
        inline app::UserAchievementStoredCallback__Class* get_class() {
            return il2cpp::get_class<app::UserAchievementStoredCallback__Class>(type_info(), "Steamworks", "UserAchievementStoredCallback");
        }
        inline app::UserAchievementStoredCallback* create() {
            return il2cpp::create_object<app::UserAchievementStoredCallback>(get_class());
        }
    } // namespace UserAchievementStoredCallback
} // namespace app::classes::types
