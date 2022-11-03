#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWaterDashAtackable {
        inline app::IWaterDashAtackable__Class** type_info = (app::IWaterDashAtackable__Class**)(modloader::win::memory::resolve_rva(0x0478F580));
        inline app::IWaterDashAtackable__Class* get_class() {
            return il2cpp::get_class<app::IWaterDashAtackable__Class>(type_info, "", "IWaterDashAtackable");
        }
    } // namespace IWaterDashAtackable
} // namespace app::classes::types
