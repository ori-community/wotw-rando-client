#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sensor_CanSeeCharacterHelper {
        namespace {
            inline app::Sensor_CanSeeCharacterHelper__Class* type_info_ref = nullptr;
        }
        inline app::Sensor_CanSeeCharacterHelper__Class** type_info = &type_info_ref;
        inline app::Sensor_CanSeeCharacterHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::Sensor_CanSeeCharacterHelper__Class>(type_info, "Moon", "Sensor", "CanSeeCharacterHelper");
        }
        inline app::Sensor_CanSeeCharacterHelper* create() {
            return il2cpp::create_object<app::Sensor_CanSeeCharacterHelper>(get_class());
        }
        inline app::Sensor_CanSeeCharacterHelper__Boxed* box(app::Sensor_CanSeeCharacterHelper value) {
            return il2cpp::box_value<app::Sensor_CanSeeCharacterHelper__Boxed>(get_class(), value);
        }
    } // namespace Sensor_CanSeeCharacterHelper
} // namespace app::classes::types
