#pragma once
#include <Modloader/app/structs/XblAchievementProgression_1.h>
#include <Modloader/app/structs/XblAchievementProgression_1__Boxed.h>
#include <Modloader/app/structs/XblAchievementProgression_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementProgression_1 {
        inline app::XblAchievementProgression_1__Class** type_info() {
            static app::XblAchievementProgression_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementProgression_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementProgression_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementProgression_1__Class>(type_info(), "XGamingRuntime.Interop", "XblAchievementProgression");
        }
        inline app::XblAchievementProgression_1* create() {
            return il2cpp::create_object<app::XblAchievementProgression_1>(get_class());
        }
        inline app::XblAchievementProgression_1__Boxed* box(app::XblAchievementProgression_1 value) {
            return il2cpp::box_value<app::XblAchievementProgression_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementProgression_1
} // namespace app::classes::types
