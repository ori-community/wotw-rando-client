#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementTimeWindow_1__Class.h>
#include <Modloader/app/structs/XblAchievementTimeWindow_1.h>
#include <Modloader/app/structs/XblAchievementTimeWindow_1__Boxed.h>

namespace app::classes::types {
    namespace XblAchievementTimeWindow_1 {
        namespace {
            inline app::XblAchievementTimeWindow_1__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementTimeWindow_1__Class** type_info = &type_info_ref;
        inline app::XblAchievementTimeWindow_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTimeWindow_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementTimeWindow");
        }
        inline app::XblAchievementTimeWindow_1* create() {
            return il2cpp::create_object<app::XblAchievementTimeWindow_1>(get_class());
        }
        inline app::XblAchievementTimeWindow_1__Boxed* box(app::XblAchievementTimeWindow_1 value) {
            return il2cpp::box_value<app::XblAchievementTimeWindow_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementTimeWindow_1
} // namespace app::classes::types
