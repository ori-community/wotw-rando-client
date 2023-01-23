#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementMediaAssetType__Enum__Class.h>
#include <Modloader/app/structs/XblAchievementMediaAssetType__Enum.h>

namespace app::classes::types {
    namespace XblAchievementMediaAssetType__Enum {
        namespace {
            inline app::XblAchievementMediaAssetType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementMediaAssetType__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementMediaAssetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAssetType__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementMediaAssetType");
        }
        inline app::XblAchievementMediaAssetType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementMediaAssetType__Enum>(get_class());
        }
    } // namespace XblAchievementMediaAssetType__Enum
} // namespace app::classes::types
