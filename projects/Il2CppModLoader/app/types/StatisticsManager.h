#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatisticsManager__Class** type_info;
        inline app::StatisticsManager__Class* get_class() {
            return il2cpp::get_class<app::StatisticsManager__Class>(type_info, "", "StatisticsManager");
        }
        inline app::StatisticsManager* create() {
            return il2cpp::create_object<app::StatisticsManager>(get_class());
        }
    } // namespace StatisticsManager
} // namespace app::classes::types
