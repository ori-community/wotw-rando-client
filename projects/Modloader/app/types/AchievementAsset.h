#pragma once
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/AchievementAsset__Array.h>
#include <Modloader/app/structs/AchievementAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementAsset {
        inline app::AchievementAsset__Class** type_info() {
            static app::AchievementAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementAsset__Class* get_class() {
            return il2cpp::get_class<app::AchievementAsset__Class>(type_info(), "", "AchievementAsset");
        }
        inline app::AchievementAsset* create() {
            return il2cpp::create_object<app::AchievementAsset>(get_class());
        }
        inline app::AchievementAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::AchievementAsset__Array>(get_class(), size);
        }
        inline app::AchievementAsset__Array* create_array(const std::vector<app::AchievementAsset*>& items) {
            return il2cpp::array_new<app::AchievementAsset__Array>(get_class(), items);
        }
    } // namespace AchievementAsset
} // namespace app::classes::types
