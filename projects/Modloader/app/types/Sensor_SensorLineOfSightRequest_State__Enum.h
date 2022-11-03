#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sensor_SensorLineOfSightRequest_State__Enum {
        inline app::Sensor_SensorLineOfSightRequest_State__Enum__Class** type_info = (app::Sensor_SensorLineOfSightRequest_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471C7B8));
        inline app::Sensor_SensorLineOfSightRequest_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Sensor_SensorLineOfSightRequest_State__Enum__Class>(type_info, "Moon", "Sensor+SensorLineOfSightRequest", "State");
        }
        inline app::Sensor_SensorLineOfSightRequest_State__Enum* create() {
            return il2cpp::create_object<app::Sensor_SensorLineOfSightRequest_State__Enum>(get_class());
        }
    } // namespace Sensor_SensorLineOfSightRequest_State__Enum
} // namespace app::classes::types
