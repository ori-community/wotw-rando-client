#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTestRunHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StressTestRunHelper__Class** type_info;
        inline app::StressTestRunHelper__Class* get_class() {
            return il2cpp::get_class<app::StressTestRunHelper__Class>(type_info, "", "StressTestRunHelper");
        }
        inline app::StressTestRunHelper* create() {
            return il2cpp::create_object<app::StressTestRunHelper>(get_class());
        }
    } // namespace StressTestRunHelper
} // namespace app::classes::types
