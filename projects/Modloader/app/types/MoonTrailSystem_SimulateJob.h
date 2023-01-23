#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTrailSystem_SimulateJob__Class.h>
#include <Modloader/app/structs/MoonTrailSystem_SimulateJob.h>
#include <Modloader/app/structs/MoonTrailSystem_SimulateJob__Boxed.h>

namespace app::classes::types {
    namespace MoonTrailSystem_SimulateJob {
        inline app::MoonTrailSystem_SimulateJob__Class** type_info = (app::MoonTrailSystem_SimulateJob__Class**)(modloader::win::memory::resolve_rva(0x0476C9D8));
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
