#pragma once
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntry.h>
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntry__Array.h>
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtendedPlayerLeaderBoardEntry {
        inline app::ExtendedPlayerLeaderBoardEntry__Class** type_info() {
            static app::ExtendedPlayerLeaderBoardEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExtendedPlayerLeaderBoardEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExtendedPlayerLeaderBoardEntry__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPlayerLeaderBoardEntry__Class>(type_info(), "SystemIntegration.Synchronizer.Statistics", "ExtendedPlayerLeaderBoardEntry");
        }
        inline app::ExtendedPlayerLeaderBoardEntry* create() {
            return il2cpp::create_object<app::ExtendedPlayerLeaderBoardEntry>(get_class());
        }
        inline app::ExtendedPlayerLeaderBoardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ExtendedPlayerLeaderBoardEntry__Array>(get_class(), size);
        }
        inline app::ExtendedPlayerLeaderBoardEntry__Array* create_array(const std::vector<app::ExtendedPlayerLeaderBoardEntry*>& items) {
            return il2cpp::array_new<app::ExtendedPlayerLeaderBoardEntry__Array>(get_class(), items);
        }
    } // namespace ExtendedPlayerLeaderBoardEntry
} // namespace app::classes::types
