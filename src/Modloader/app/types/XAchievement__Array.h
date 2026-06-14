#pragma once
#include <Modloader/app/structs/XAchievement__Array.h>
#include <Modloader/app/structs/XAchievement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XAchievement__Array {
        inline app::XAchievement__Array__Class** type_info() {
            static app::XAchievement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XAchievement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XAchievement__Array__Class* get_class() {
            return il2cpp::get_class<app::XAchievement__Array__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XAchievement[]");
        }
        inline app::XAchievement__Array* create() {
            return il2cpp::create_object<app::XAchievement__Array>(get_class());
        }
    } // namespace XAchievement__Array
} // namespace app::classes::types
