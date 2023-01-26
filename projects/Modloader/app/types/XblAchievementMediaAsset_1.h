#pragma once
#include <Modloader/app/structs/XblAchievementMediaAsset_1.h>
#include <Modloader/app/structs/XblAchievementMediaAsset_1__Boxed.h>
#include <Modloader/app/structs/XblAchievementMediaAsset_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementMediaAsset_1 {
        inline app::XblAchievementMediaAsset_1__Class** type_info() {
            static app::XblAchievementMediaAsset_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementMediaAsset_1__Class**)(modloader::win::memory::resolve_rva(0x047976B8));
            }
            return cache;
        }
        inline app::XblAchievementMediaAsset_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementMediaAsset_1__Class>(type_info(), "XGamingRuntime.Interop", "XblAchievementMediaAsset");
        }
        inline app::XblAchievementMediaAsset_1* create() {
            return il2cpp::create_object<app::XblAchievementMediaAsset_1>(get_class());
        }
        inline app::XblAchievementMediaAsset_1__Boxed* box(app::XblAchievementMediaAsset_1 value) {
            return il2cpp::box_value<app::XblAchievementMediaAsset_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementMediaAsset_1
} // namespace app::classes::types
