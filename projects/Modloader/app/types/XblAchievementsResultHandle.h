#pragma once
#include <Modloader/app/structs/XblAchievementsResultHandle.h>
#include <Modloader/app/structs/XblAchievementsResultHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementsResultHandle {
        inline app::XblAchievementsResultHandle__Class** type_info() {
            static app::XblAchievementsResultHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementsResultHandle__Class**)(modloader::win::memory::resolve_rva(0x04746790));
            }
            return cache;
        }
        inline app::XblAchievementsResultHandle__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementsResultHandle__Class>(type_info(), "XGamingRuntime", "XblAchievementsResultHandle");
        }
        inline app::XblAchievementsResultHandle* create() {
            return il2cpp::create_object<app::XblAchievementsResultHandle>(get_class());
        }
    } // namespace XblAchievementsResultHandle
} // namespace app::classes::types
