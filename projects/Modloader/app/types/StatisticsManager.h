#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticsManager {
        inline app::StatisticsManager__Class** type_info = (app::StatisticsManager__Class**)(modloader::win::memory::resolve_rva(0x0478B3C0));
        inline app::StatisticsManager__Class* get_class() {
            return il2cpp::get_class<app::StatisticsManager__Class>(type_info, "", "StatisticsManager");
        }
        inline app::StatisticsManager* create() {
            return il2cpp::create_object<app::StatisticsManager>(get_class());
        }
    } // namespace StatisticsManager
} // namespace app::classes::types
