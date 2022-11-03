#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementType__Enum {
        namespace {
            inline app::XblAchievementType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementType__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementType__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementType");
        }
        inline app::XblAchievementType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementType__Enum>(get_class());
        }
    } // namespace XblAchievementType__Enum
} // namespace app::classes::types
