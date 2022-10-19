#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceRequestResultEntry {
        inline app::RaceRequestResultEntry__Class** type_info = (app::RaceRequestResultEntry__Class**)(modloader::win::memory::resolve_rva(0x04799F48));
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
