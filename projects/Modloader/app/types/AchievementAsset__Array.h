#pragma once
#include <Modloader/app/structs/AchievementAsset__Array.h>
#include <Modloader/app/structs/AchievementAsset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementAsset__Array {
        inline app::AchievementAsset__Array__Class** type_info() {
            static app::AchievementAsset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementAsset__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::AchievementAsset__Array__Class>(type_info(), "", "AchievementAsset[]");
        }
        inline app::AchievementAsset__Array* create() {
            return il2cpp::create_object<app::AchievementAsset__Array>(get_class());
        }
    } // namespace AchievementAsset__Array
} // namespace app::classes::types
