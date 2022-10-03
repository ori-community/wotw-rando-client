#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementMediaAsset__Array {
        namespace {
            app::XblAchievementMediaAsset__Array__Class* type_info_ref = nullptr;
        }
        app::XblAchievementMediaAsset__Array__Class** type_info = &type_info_ref;
        inline app::XblAchievementMediaAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAsset__Array__Class>(type_info, "XGamingRuntime", "XblAchievementMediaAsset[]");
        }
        inline app::XblAchievementMediaAsset__Array* create() {
            return il2cpp::create_object<app::XblAchievementMediaAsset__Array>(get_class());
        }
    } // namespace XblAchievementMediaAsset__Array
} // namespace app::classes::types
