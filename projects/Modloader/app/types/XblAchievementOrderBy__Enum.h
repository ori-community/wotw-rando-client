#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XblAchievementOrderBy__Enum__Class.h>
#include <Modloader/app/structs/XblAchievementOrderBy__Enum.h>

namespace app::classes::types {
    namespace XblAchievementOrderBy__Enum {
        namespace {
            inline app::XblAchievementOrderBy__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementOrderBy__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementOrderBy__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementOrderBy__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementOrderBy");
        }
        inline app::XblAchievementOrderBy__Enum* create() {
            return il2cpp::create_object<app::XblAchievementOrderBy__Enum>(get_class());
        }
    } // namespace XblAchievementOrderBy__Enum
} // namespace app::classes::types
