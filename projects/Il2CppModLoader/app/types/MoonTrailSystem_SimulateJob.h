#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrailSystem_SimulateJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTrailSystem_SimulateJob__Class** type_info;
        inline app::MoonTrailSystem_SimulateJob__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrailSystem_SimulateJob__Class>(type_info, "Moon", "MoonTrailSystem", "SimulateJob");
        }
        inline app::MoonTrailSystem_SimulateJob* create() {
            return il2cpp::create_object<app::MoonTrailSystem_SimulateJob>(get_class());
        }
        inline app::MoonTrailSystem_SimulateJob__Boxed* box(app::MoonTrailSystem_SimulateJob value) {
            return il2cpp::box_value<app::MoonTrailSystem_SimulateJob__Boxed>(get_class(), value);
        }
    } // namespace MoonTrailSystem_SimulateJob
} // namespace app::classes::types
