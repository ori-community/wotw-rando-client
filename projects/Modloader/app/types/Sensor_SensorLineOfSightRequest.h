#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sensor_SensorLineOfSightRequest {
        namespace {
            inline app::Sensor_SensorLineOfSightRequest__Class* type_info_ref = nullptr;
        }
        inline app::Sensor_SensorLineOfSightRequest__Class** type_info = &type_info_ref;
        inline app::Sensor_SensorLineOfSightRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::Sensor_SensorLineOfSightRequest__Class>(type_info, "Moon", "Sensor", "SensorLineOfSightRequest");
        }
        inline app::Sensor_SensorLineOfSightRequest* create() {
            return il2cpp::create_object<app::Sensor_SensorLineOfSightRequest>(get_class());
        }
        inline app::Sensor_SensorLineOfSightRequest__Boxed* box(app::Sensor_SensorLineOfSightRequest value) {
            return il2cpp::box_value<app::Sensor_SensorLineOfSightRequest__Boxed>(get_class(), value);
        }
    } // namespace Sensor_SensorLineOfSightRequest
} // namespace app::classes::types
