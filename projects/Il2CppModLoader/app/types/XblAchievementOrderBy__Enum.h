#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementOrderBy__Enum {
        namespace {
            app::XblAchievementOrderBy__Enum__Class* type_info_ref = nullptr;
        }
        app::XblAchievementOrderBy__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementOrderBy__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementOrderBy__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementOrderBy");
        }
        inline app::XblAchievementOrderBy__Enum* create() {
            return il2cpp::create_object<app::XblAchievementOrderBy__Enum>(get_class());
        }
    } // namespace XblAchievementOrderBy__Enum
} // namespace app::classes::types
