#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalSystemManager_TimeSliceDisablePhysics_d_157 {
        inline app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class** type_info = (app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class**)(modloader::win::memory::resolve_rva(0x04755A50));
        inline app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class>(type_info, "", "PhysicalSystemManager", "<TimeSliceDisablePhysics>d__157");
        }
        inline app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157* create() {
            return il2cpp::create_object<app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157>(get_class());
        }
    } // namespace PhysicalSystemManager_TimeSliceDisablePhysics_d_157
} // namespace app::classes::types
