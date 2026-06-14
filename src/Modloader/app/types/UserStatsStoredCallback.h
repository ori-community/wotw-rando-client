#pragma once
#include <Modloader/app/structs/UserStatsStoredCallback.h>
#include <Modloader/app/structs/UserStatsStoredCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserStatsStoredCallback {
        inline app::UserStatsStoredCallback__Class** type_info() {
            static app::UserStatsStoredCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserStatsStoredCallback__Class**)(modloader::win::memory::resolve_rva(0x04709A00));
            }
            return cache;
        }
        inline app::UserStatsStoredCallback__Class* get_class() {
            return il2cpp::get_class<app::UserStatsStoredCallback__Class>(type_info(), "Steamworks", "UserStatsStoredCallback");
        }
        inline app::UserStatsStoredCallback* create() {
            return il2cpp::create_object<app::UserStatsStoredCallback>(get_class());
        }
    } // namespace UserStatsStoredCallback
} // namespace app::classes::types
