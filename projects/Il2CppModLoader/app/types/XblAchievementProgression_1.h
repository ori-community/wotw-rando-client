#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementProgression_1 {
        namespace {
            inline app::XblAchievementProgression_1__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementProgression_1__Class** type_info = &type_info_ref;
        inline app::XblAchievementProgression_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementProgression_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementProgression");
        }
        inline app::XblAchievementProgression_1* create() {
            return il2cpp::create_object<app::XblAchievementProgression_1>(get_class());
        }
        inline app::XblAchievementProgression_1__Boxed* box(app::XblAchievementProgression_1 value) {
            return il2cpp::box_value<app::XblAchievementProgression_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementProgression_1
} // namespace app::classes::types
