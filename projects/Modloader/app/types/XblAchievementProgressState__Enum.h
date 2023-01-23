#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementProgressState__Enum__Class.h>
#include <Modloader/app/structs/XblAchievementProgressState__Enum.h>

namespace app::classes::types {
    namespace XblAchievementProgressState__Enum {
        namespace {
            inline app::XblAchievementProgressState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementProgressState__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementProgressState__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementProgressState__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementProgressState");
        }
        inline app::XblAchievementProgressState__Enum* create() {
            return il2cpp::create_object<app::XblAchievementProgressState__Enum>(get_class());
        }
    } // namespace XblAchievementProgressState__Enum
} // namespace app::classes::types
