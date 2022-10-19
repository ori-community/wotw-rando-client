#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtendedPlayerLeaderBoardEntry {
        namespace {
            inline app::ExtendedPlayerLeaderBoardEntry__Class* type_info_ref = nullptr;
        }
        inline app::ExtendedPlayerLeaderBoardEntry__Class** type_info = &type_info_ref;
        inline app::ExtendedPlayerLeaderBoardEntry__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPlayerLeaderBoardEntry__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "ExtendedPlayerLeaderBoardEntry");
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
