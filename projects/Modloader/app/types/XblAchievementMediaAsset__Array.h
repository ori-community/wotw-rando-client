#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementMediaAsset__Array {
        namespace {
            inline app::XblAchievementMediaAsset__Array__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementMediaAsset__Array__Class** type_info = &type_info_ref;
        inline app::XblAchievementMediaAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAsset__Array__Class>(type_info, "XGamingRuntime", "XblAchievementMediaAsset[]");
        }
        inline app::XblAchievementMediaAsset__Array* create() {
            return il2cpp::create_object<app::XblAchievementMediaAsset__Array>(get_class());
        }
    } // namespace XblAchievementMediaAsset__Array
} // namespace app::classes::types
