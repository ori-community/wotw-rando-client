#pragma once
#include <Modloader/app/structs/IWaterDashAtackable.h>
#include <Modloader/app/structs/IWaterDashAtackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWaterDashAtackable {
        inline app::IWaterDashAtackable__Class** type_info() {
            static app::IWaterDashAtackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWaterDashAtackable__Class**)(modloader::win::memory::resolve_rva(0x0478F580));
            }
            return cache;
        }
        inline app::IWaterDashAtackable__Class* get_class() {
            return il2cpp::get_class<app::IWaterDashAtackable__Class>(type_info(), "", "IWaterDashAtackable");
        }
    } // namespace IWaterDashAtackable
} // namespace app::classes::types
