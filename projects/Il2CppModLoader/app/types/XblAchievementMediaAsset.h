#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementMediaAsset {
        inline app::XblAchievementMediaAsset__Class** type_info = (app::XblAchievementMediaAsset__Class**)(modloader::win::memory::resolve_rva(0x04782C88));
        inline app::XblAchievementMediaAsset__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAsset__Class>(type_info, "XGamingRuntime", "XblAchievementMediaAsset");
        }
        inline app::XblAchievementMediaAsset* create() {
            return il2cpp::create_object<app::XblAchievementMediaAsset>(get_class());
        }
        inline app::XblAchievementMediaAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievementMediaAsset__Array>(get_class(), size);
        }
        inline app::XblAchievementMediaAsset__Array* create_array(const std::vector<app::XblAchievementMediaAsset*>& items) {
            return il2cpp::array_new<app::XblAchievementMediaAsset__Array>(get_class(), items);
        }
    } // namespace XblAchievementMediaAsset
} // namespace app::classes::types
