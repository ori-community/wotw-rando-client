#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceDataCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceDataCache__Class** type_info;
        inline app::RaceDataCache__Class* get_class() {
            return il2cpp::get_class<app::RaceDataCache__Class>(type_info, "SystemIntegration.Races", "RaceDataCache");
        }
        inline app::RaceDataCache* create() {
            return il2cpp::create_object<app::RaceDataCache>(get_class());
        }
        inline app::RaceDataCache__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceDataCache__Array>(get_class(), size);
        }
        inline app::RaceDataCache__Array* create_array(const std::vector<app::RaceDataCache*>& items) {
            return il2cpp::array_new<app::RaceDataCache__Array>(get_class(), items);
        }
    } // namespace RaceDataCache
} // namespace app::classes::types
