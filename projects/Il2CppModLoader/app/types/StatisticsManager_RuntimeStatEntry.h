#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager_RuntimeStatEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatisticsManager_RuntimeStatEntry__Class** type_info;
        inline app::StatisticsManager_RuntimeStatEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticsManager_RuntimeStatEntry__Class>(type_info, "", "StatisticsManager", "RuntimeStatEntry");
        }
        inline app::StatisticsManager_RuntimeStatEntry* create() {
            return il2cpp::create_object<app::StatisticsManager_RuntimeStatEntry>(get_class());
        }
        inline app::StatisticsManager_RuntimeStatEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticsManager_RuntimeStatEntry__Array>(get_class(), size);
        }
    } // namespace StatisticsManager_RuntimeStatEntry
} // namespace app::classes::types
