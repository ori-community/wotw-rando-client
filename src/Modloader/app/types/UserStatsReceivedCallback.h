#pragma once
#include <Modloader/app/structs/UserStatsReceivedCallback.h>
#include <Modloader/app/structs/UserStatsReceivedCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserStatsReceivedCallback {
        inline app::UserStatsReceivedCallback__Class** type_info() {
            static app::UserStatsReceivedCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserStatsReceivedCallback__Class**)(modloader::win::memory::resolve_rva(0x04767E30));
            }
            return cache;
        }
        inline app::UserStatsReceivedCallback__Class* get_class() {
            return il2cpp::get_class<app::UserStatsReceivedCallback__Class>(type_info(), "Steamworks", "UserStatsReceivedCallback");
        }
        inline app::UserStatsReceivedCallback* create() {
            return il2cpp::create_object<app::UserStatsReceivedCallback>(get_class());
        }
    } // namespace UserStatsReceivedCallback
} // namespace app::classes::types
