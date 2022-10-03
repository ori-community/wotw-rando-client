#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievement__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievement__Array__Class** type_info;
        inline app::XblAchievement__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievement__Array__Class>(type_info, "XGamingRuntime", "XblAchievement[]");
        }
        inline app::XblAchievement__Array* create() {
            return il2cpp::create_object<app::XblAchievement__Array>(get_class());
        }
    } // namespace XblAchievement__Array
} // namespace app::classes::types
