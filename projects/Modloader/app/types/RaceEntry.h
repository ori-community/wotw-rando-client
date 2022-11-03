#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceEntry {
        inline app::RaceEntry__Class** type_info = (app::RaceEntry__Class**)(modloader::win::memory::resolve_rva(0x04766C18));
        inline app::RaceEntry__Class* get_class() {
            return il2cpp::get_class<app::RaceEntry__Class>(type_info, "SystemIntegration.Races", "RaceEntry");
        }
        inline app::RaceEntry* create() {
            return il2cpp::create_object<app::RaceEntry>(get_class());
        }
        inline app::RaceEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceEntry__Array>(get_class(), size);
        }
        inline app::RaceEntry__Array* create_array(const std::vector<app::RaceEntry*>& items) {
            return il2cpp::array_new<app::RaceEntry__Array>(get_class(), items);
        }
    } // namespace RaceEntry
} // namespace app::classes::types
