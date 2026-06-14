#pragma once
#include <Modloader/app/structs/XblAchievementsResultHandle_1.h>
#include <Modloader/app/structs/XblAchievementsResultHandle_1__Boxed.h>
#include <Modloader/app/structs/XblAchievementsResultHandle_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementsResultHandle_1 {
        inline app::XblAchievementsResultHandle_1__Class** type_info() {
            static app::XblAchievementsResultHandle_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementsResultHandle_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementsResultHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementsResultHandle_1__Class>(type_info(), "XGamingRuntime.Interop", "XblAchievementsResultHandle");
        }
        inline app::XblAchievementsResultHandle_1* create() {
            return il2cpp::create_object<app::XblAchievementsResultHandle_1>(get_class());
        }
        inline app::XblAchievementsResultHandle_1__Boxed* box(app::XblAchievementsResultHandle_1 value) {
            return il2cpp::box_value<app::XblAchievementsResultHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementsResultHandle_1
} // namespace app::classes::types
