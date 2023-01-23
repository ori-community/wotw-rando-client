#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntries__Class.h>
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntries.h>

namespace app::classes::types {
    namespace ExtendedPlayerLeaderBoardEntries {
        inline app::ExtendedPlayerLeaderBoardEntries__Class** type_info = (app::ExtendedPlayerLeaderBoardEntries__Class**)(modloader::win::memory::resolve_rva(0x0478BC60));
        inline app::ExtendedPlayerLeaderBoardEntries__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPlayerLeaderBoardEntries__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "ExtendedPlayerLeaderBoardEntries");
        }
        inline app::ExtendedPlayerLeaderBoardEntries* create() {
            return il2cpp::create_object<app::ExtendedPlayerLeaderBoardEntries>(get_class());
        }
    } // namespace ExtendedPlayerLeaderBoardEntries
} // namespace app::classes::types
