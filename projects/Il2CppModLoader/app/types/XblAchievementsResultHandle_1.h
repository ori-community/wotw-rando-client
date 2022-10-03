#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementsResultHandle_1 {
        namespace {
            app::XblAchievementsResultHandle_1__Class* type_info_ref = nullptr;
        }
        app::XblAchievementsResultHandle_1__Class** type_info = &type_info_ref;
        inline app::XblAchievementsResultHandle_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementsResultHandle_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementsResultHandle");
        }
        inline app::XblAchievementsResultHandle_1* create() {
            return il2cpp::create_object<app::XblAchievementsResultHandle_1>(get_class());
        }
        inline app::XblAchievementsResultHandle_1__Boxed* box(app::XblAchievementsResultHandle_1 value) {
            return il2cpp::box_value<app::XblAchievementsResultHandle_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementsResultHandle_1
} // namespace app::classes::types
