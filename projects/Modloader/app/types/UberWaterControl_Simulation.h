#pragma once
#include <Modloader/app/structs/UberWaterControl_Simulation.h>
#include <Modloader/app/structs/UberWaterControl_Simulation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_Simulation {
        inline app::UberWaterControl_Simulation__Class** type_info() {
            static app::UberWaterControl_Simulation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterControl_Simulation__Class**)(modloader::win::memory::resolve_rva(0x047084B0));
            }
            return cache;
        }
        inline app::UberWaterControl_Simulation__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_Simulation__Class>(type_info(), "", "UberWaterControl", "Simulation");
        }
        inline app::UberWaterControl_Simulation* create() {
            return il2cpp::create_object<app::UberWaterControl_Simulation>(get_class());
        }
    } // namespace UberWaterControl_Simulation
} // namespace app::classes::types
