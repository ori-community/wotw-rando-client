#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtendedPlayerLeaderBoardEntry {
        namespace {
            app::ExtendedPlayerLeaderBoardEntry__Class* type_info_ref = nullptr;
        }
        app::ExtendedPlayerLeaderBoardEntry__Class** type_info = &type_info_ref;
        inline app::ExtendedPlayerLeaderBoardEntry__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPlayerLeaderBoardEntry__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "ExtendedPlayerLeaderBoardEntry");
        }
        inline app::ExtendedPlayerLeaderBoardEntry* create() {
            return il2cpp::create_object<app::ExtendedPlayerLeaderBoardEntry>(get_class());
        }
        inline app::ExtendedPlayerLeaderBoardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ExtendedPlayerLeaderBoardEntry__Array>(get_class(), size);
        }
    } // namespace ExtendedPlayerLeaderBoardEntry
} // namespace app::classes::types
