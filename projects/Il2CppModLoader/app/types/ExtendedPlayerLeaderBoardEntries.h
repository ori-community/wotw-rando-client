#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtendedPlayerLeaderBoardEntries {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtendedPlayerLeaderBoardEntries__Class** type_info;
        inline app::ExtendedPlayerLeaderBoardEntries__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPlayerLeaderBoardEntries__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "ExtendedPlayerLeaderBoardEntries");
        }
        inline app::ExtendedPlayerLeaderBoardEntries* create() {
            return il2cpp::create_object<app::ExtendedPlayerLeaderBoardEntries>(get_class());
        }
    } // namespace ExtendedPlayerLeaderBoardEntries
} // namespace app::classes::types
