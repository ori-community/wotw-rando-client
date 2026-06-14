#pragma once
#include <Modloader/app/structs/IAchievementData.h>
#include <Modloader/app/structs/IAchievementData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAchievementData {
        inline app::IAchievementData__Class** type_info() {
            static app::IAchievementData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAchievementData__Class**)(modloader::win::memory::resolve_rva(0x0471EEF0));
            }
            return cache;
        }
        inline app::IAchievementData__Class* get_class() {
            return il2cpp::get_class<app::IAchievementData__Class>(type_info(), "", "IAchievementData");
        }
    } // namespace IAchievementData
} // namespace app::classes::types
