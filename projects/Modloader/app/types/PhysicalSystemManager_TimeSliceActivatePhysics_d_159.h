#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class.h>
#include <Modloader/app/structs/PhysicalSystemManager_TimeSliceActivatePhysics_d_159.h>

namespace app::classes::types {
    namespace PhysicalSystemManager_TimeSliceActivatePhysics_d_159 {
        inline app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class** type_info = (app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class**)(modloader::win::memory::resolve_rva(0x0475B378));
        inline app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class>(type_info, "", "PhysicalSystemManager", "<TimeSliceActivatePhysics>d__159");
        }
        inline app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159* create() {
            return il2cpp::create_object<app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159>(get_class());
        }
    } // namespace PhysicalSystemManager_TimeSliceActivatePhysics_d_159
} // namespace app::classes::types
