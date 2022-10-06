#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceRequestResultEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceRequestResultEntry__Class** type_info;
        inline app::RaceRequestResultEntry__Class* get_class() {
            return il2cpp::get_class<app::RaceRequestResultEntry__Class>(type_info, "SystemIntegration.Races", "RaceRequestResultEntry");
        }
        inline app::RaceRequestResultEntry* create() {
            return il2cpp::create_object<app::RaceRequestResultEntry>(get_class());
        }
        inline app::RaceRequestResultEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceRequestResultEntry__Array>(get_class(), size);
        }
        inline app::RaceRequestResultEntry__Array* create_array(const std::vector<app::RaceRequestResultEntry*>& items) {
            return il2cpp::array_new<app::RaceRequestResultEntry__Array>(get_class(), items);
        }
    } // namespace RaceRequestResultEntry
} // namespace app::classes::types
