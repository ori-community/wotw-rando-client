#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardEntryData__Class.h>
#include <Modloader/app/structs/LeaderboardEntryData.h>

namespace app::classes::types {
    namespace LeaderboardEntryData {
        inline app::LeaderboardEntryData__Class** type_info = (app::LeaderboardEntryData__Class**)(modloader::win::memory::resolve_rva(0x0477CB68));
        inline app::LeaderboardEntryData__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardEntryData__Class>(type_info, "", "LeaderboardEntryData");
        }
        inline app::LeaderboardEntryData* create() {
            return il2cpp::create_object<app::LeaderboardEntryData>(get_class());
        }
    } // namespace LeaderboardEntryData
} // namespace app::classes::types
