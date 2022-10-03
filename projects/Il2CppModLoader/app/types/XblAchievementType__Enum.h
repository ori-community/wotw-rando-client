#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementType__Enum {
        namespace {
            app::XblAchievementType__Enum__Class* type_info_ref = nullptr;
        }
        app::XblAchievementType__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementType__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementType");
        }
        inline app::XblAchievementType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementType__Enum>(get_class());
        }
    } // namespace XblAchievementType__Enum
} // namespace app::classes::types
