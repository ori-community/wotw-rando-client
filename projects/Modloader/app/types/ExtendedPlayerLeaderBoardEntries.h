#pragma once
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntries.h>
#include <Modloader/app/structs/ExtendedPlayerLeaderBoardEntries__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtendedPlayerLeaderBoardEntries {
        inline app::ExtendedPlayerLeaderBoardEntries__Class** type_info() {
            static app::ExtendedPlayerLeaderBoardEntries__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtendedPlayerLeaderBoardEntries__Class**)(modloader::win::memory::resolve_rva(0x0478BC60));
            }
            return cache;
        }
        inline app::ExtendedPlayerLeaderBoardEntries__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPlayerLeaderBoardEntries__Class>(type_info(), "SystemIntegration.Synchronizer.Statistics", "ExtendedPlayerLeaderBoardEntries");
        }
        inline app::ExtendedPlayerLeaderBoardEntries* create() {
            return il2cpp::create_object<app::ExtendedPlayerLeaderBoardEntries>(get_class());
        }
    } // namespace ExtendedPlayerLeaderBoardEntries
} // namespace app::classes::types
