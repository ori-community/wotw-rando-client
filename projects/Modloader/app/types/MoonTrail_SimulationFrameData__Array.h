#pragma once
#include <Modloader/app/structs/MoonTrail_SimulationFrameData__Array.h>
#include <Modloader/app/structs/MoonTrail_SimulationFrameData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrail_SimulationFrameData__Array {
        inline app::MoonTrail_SimulationFrameData__Array__Class** type_info() {
            static app::MoonTrail_SimulationFrameData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrail_SimulationFrameData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrail_SimulationFrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail_SimulationFrameData__Array__Class>(type_info(), "Moon", "MoonTrail+SimulationFrameData[]");
        }
        inline app::MoonTrail_SimulationFrameData__Array* create() {
            return il2cpp::create_object<app::MoonTrail_SimulationFrameData__Array>(get_class());
        }
    } // namespace MoonTrail_SimulationFrameData__Array
} // namespace app::classes::types
