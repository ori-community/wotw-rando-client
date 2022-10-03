#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TeamCityHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TeamCityHelper__Class** type_info;
        inline app::TeamCityHelper__Class* get_class() {
            return il2cpp::get_class<app::TeamCityHelper__Class>(type_info, "Moon.ContinuousIntegration", "TeamCityHelper");
        }
        inline app::TeamCityHelper* create() {
            return il2cpp::create_object<app::TeamCityHelper>(get_class());
        }
    } // namespace TeamCityHelper
} // namespace app::classes::types
