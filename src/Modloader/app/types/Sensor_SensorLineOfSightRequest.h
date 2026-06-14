#pragma once
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest.h>
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest__Boxed.h>
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sensor_SensorLineOfSightRequest {
        inline app::Sensor_SensorLineOfSightRequest__Class** type_info() {
            static app::Sensor_SensorLineOfSightRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sensor_SensorLineOfSightRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sensor_SensorLineOfSightRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::Sensor_SensorLineOfSightRequest__Class>(type_info(), "Moon", "Sensor", "SensorLineOfSightRequest");
        }
        inline app::Sensor_SensorLineOfSightRequest* create() {
            return il2cpp::create_object<app::Sensor_SensorLineOfSightRequest>(get_class());
        }
        inline app::Sensor_SensorLineOfSightRequest__Boxed* box(app::Sensor_SensorLineOfSightRequest value) {
            return il2cpp::box_value<app::Sensor_SensorLineOfSightRequest__Boxed>(get_class(), value);
        }
    } // namespace Sensor_SensorLineOfSightRequest
} // namespace app::classes::types
