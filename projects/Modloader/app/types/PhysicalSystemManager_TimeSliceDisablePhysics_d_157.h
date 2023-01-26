#pragma once
#include <Modloader/app/structs/PhysicalSystemManager_TimeSliceDisablePhysics_d_157.h>
#include <Modloader/app/structs/PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemManager_TimeSliceDisablePhysics_d_157 {
        inline app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class** type_info() {
            static app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class**)(modloader::win::memory::resolve_rva(0x04755A50));
            }
            return cache;
        }
        inline app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class>(type_info(), "", "PhysicalSystemManager", "<TimeSliceDisablePhysics>d__157");
        }
        inline app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157* create() {
            return il2cpp::create_object<app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157>(get_class());
        }
    } // namespace PhysicalSystemManager_TimeSliceDisablePhysics_d_157
} // namespace app::classes::types
