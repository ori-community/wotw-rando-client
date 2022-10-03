#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementMediaAsset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementMediaAsset__Class** type_info;
        inline app::XblAchievementMediaAsset__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAsset__Class>(type_info, "XGamingRuntime", "XblAchievementMediaAsset");
        }
        inline app::XblAchievementMediaAsset* create() {
            return il2cpp::create_object<app::XblAchievementMediaAsset>(get_class());
        }
        inline app::XblAchievementMediaAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievementMediaAsset__Array>(get_class(), size);
        }
    } // namespace XblAchievementMediaAsset
} // namespace app::classes::types
