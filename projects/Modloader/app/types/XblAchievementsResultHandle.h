#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementsResultHandle {
        inline app::XblAchievementsResultHandle__Class** type_info = (app::XblAchievementsResultHandle__Class**)(modloader::win::memory::resolve_rva(0x04746790));
        inline app::XblAchievementsResultHandle__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementsResultHandle__Class>(type_info, "XGamingRuntime", "XblAchievementsResultHandle");
        }
        inline app::XblAchievementsResultHandle* create() {
            return il2cpp::create_object<app::XblAchievementsResultHandle>(get_class());
        }
    } // namespace XblAchievementsResultHandle
} // namespace app::classes::types
