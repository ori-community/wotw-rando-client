#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceDataCache {
        inline app::RaceDataCache__Class** type_info = (app::RaceDataCache__Class**)(modloader::win::memory::resolve_rva(0x0477F458));
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
