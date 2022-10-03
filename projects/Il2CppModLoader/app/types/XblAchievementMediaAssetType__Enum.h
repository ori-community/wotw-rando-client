#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementMediaAssetType__Enum {
        namespace {
            app::XblAchievementMediaAssetType__Enum__Class* type_info_ref = nullptr;
        }
        app::XblAchievementMediaAssetType__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementMediaAssetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAssetType__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementMediaAssetType");
        }
        inline app::XblAchievementMediaAssetType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementMediaAssetType__Enum>(get_class());
        }
    } // namespace XblAchievementMediaAssetType__Enum
} // namespace app::classes::types
