#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrail_SimulationFrameData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTrail_SimulationFrameData__Class** type_info;
        inline app::MoonTrail_SimulationFrameData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrail_SimulationFrameData__Class>(type_info, "Moon", "MoonTrail", "SimulationFrameData");
        }
        inline app::MoonTrail_SimulationFrameData* create() {
            return il2cpp::create_object<app::MoonTrail_SimulationFrameData>(get_class());
        }
        inline app::MoonTrail_SimulationFrameData__Boxed* box(app::MoonTrail_SimulationFrameData value) {
            return il2cpp::box_value<app::MoonTrail_SimulationFrameData__Boxed>(get_class(), value);
        }
        inline app::MoonTrail_SimulationFrameData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrail_SimulationFrameData__Array>(get_class(), size);
        }
        inline app::MoonTrail_SimulationFrameData__Array* create_array(const std::vector<app::MoonTrail_SimulationFrameData__Boxed>& items) {
            return il2cpp::array_new<app::MoonTrail_SimulationFrameData__Array>(get_class(), items);
        }
    } // namespace MoonTrail_SimulationFrameData
} // namespace app::classes::types
