#pragma once
#include <Modloader/app/structs/LeaderboardEntryData.h>
#include <Modloader/app/structs/LeaderboardEntryData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardEntryData {
        inline app::LeaderboardEntryData__Class** type_info() {
            static app::LeaderboardEntryData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardEntryData__Class**)(modloader::win::memory::resolve_rva(0x0477CB68));
            }
            return cache;
        }
        inline app::LeaderboardEntryData__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardEntryData__Class>(type_info(), "", "LeaderboardEntryData");
        }
        inline app::LeaderboardEntryData* create() {
            return il2cpp::create_object<app::LeaderboardEntryData>(get_class());
        }
    } // namespace LeaderboardEntryData
} // namespace app::classes::types
