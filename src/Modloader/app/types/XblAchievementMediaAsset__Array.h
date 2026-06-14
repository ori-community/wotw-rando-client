#pragma once
#include <Modloader/app/structs/XblAchievementMediaAsset__Array.h>
#include <Modloader/app/structs/XblAchievementMediaAsset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementMediaAsset__Array {
        inline app::XblAchievementMediaAsset__Array__Class** type_info() {
            static app::XblAchievementMediaAsset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementMediaAsset__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementMediaAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAsset__Array__Class>(type_info(), "XGamingRuntime", "XblAchievementMediaAsset[]");
        }
        inline app::XblAchievementMediaAsset__Array* create() {
            return il2cpp::create_object<app::XblAchievementMediaAsset__Array>(get_class());
        }
    } // namespace XblAchievementMediaAsset__Array
} // namespace app::classes::types
