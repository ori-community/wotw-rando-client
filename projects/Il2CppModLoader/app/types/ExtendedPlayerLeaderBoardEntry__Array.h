#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtendedPlayerLeaderBoardEntry__Array {
        namespace {
            inline app::ExtendedPlayerLeaderBoardEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::ExtendedPlayerLeaderBoardEntry__Array__Class** type_info = &type_info_ref;
        inline app::ExtendedPlayerLeaderBoardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPlayerLeaderBoardEntry__Array__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "ExtendedPlayerLeaderBoardEntry[]");
        }
        inline app::ExtendedPlayerLeaderBoardEntry__Array* create() {
            return il2cpp::create_object<app::ExtendedPlayerLeaderBoardEntry__Array>(get_class());
        }
    } // namespace ExtendedPlayerLeaderBoardEntry__Array
} // namespace app::classes::types
