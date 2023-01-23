#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAchievementData__Class.h>

namespace app::classes::types {
    namespace IAchievementData {
        inline app::IAchievementData__Class** type_info = (app::IAchievementData__Class**)(modloader::win::memory::resolve_rva(0x0471EEF0));
        inline app::IAchievementData__Class* get_class() {
            return il2cpp::get_class<app::IAchievementData__Class>(type_info, "", "IAchievementData");
        }
    } // namespace IAchievementData
} // namespace app::classes::types
