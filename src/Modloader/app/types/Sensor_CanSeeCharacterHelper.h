#pragma once
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper.h>
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper__Boxed.h>
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sensor_CanSeeCharacterHelper {
        inline app::Sensor_CanSeeCharacterHelper__Class** type_info() {
            static app::Sensor_CanSeeCharacterHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sensor_CanSeeCharacterHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sensor_CanSeeCharacterHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::Sensor_CanSeeCharacterHelper__Class>(type_info(), "Moon", "Sensor", "CanSeeCharacterHelper");
        }
        inline app::Sensor_CanSeeCharacterHelper* create() {
            return il2cpp::create_object<app::Sensor_CanSeeCharacterHelper>(get_class());
        }
        inline app::Sensor_CanSeeCharacterHelper__Boxed* box(app::Sensor_CanSeeCharacterHelper value) {
            return il2cpp::box_value<app::Sensor_CanSeeCharacterHelper__Boxed>(get_class(), value);
        }
    } // namespace Sensor_CanSeeCharacterHelper
} // namespace app::classes::types
