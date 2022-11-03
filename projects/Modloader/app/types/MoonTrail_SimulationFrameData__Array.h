#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrail_SimulationFrameData__Array {
        namespace {
            inline app::MoonTrail_SimulationFrameData__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrail_SimulationFrameData__Array__Class** type_info = &type_info_ref;
        inline app::MoonTrail_SimulationFrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail_SimulationFrameData__Array__Class>(type_info, "Moon", "MoonTrail+SimulationFrameData[]");
        }
        inline app::MoonTrail_SimulationFrameData__Array* create() {
            return il2cpp::create_object<app::MoonTrail_SimulationFrameData__Array>(get_class());
        }
    } // namespace MoonTrail_SimulationFrameData__Array
} // namespace app::classes::types
