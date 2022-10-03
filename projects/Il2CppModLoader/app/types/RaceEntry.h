#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceEntry__Class** type_info;
        inline app::RaceEntry__Class* get_class() {
            return il2cpp::get_class<app::RaceEntry__Class>(type_info, "SystemIntegration.Races", "RaceEntry");
        }
        inline app::RaceEntry* create() {
            return il2cpp::create_object<app::RaceEntry>(get_class());
        }
        inline app::RaceEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceEntry__Array>(get_class(), size);
        }
    } // namespace RaceEntry
} // namespace app::classes::types
