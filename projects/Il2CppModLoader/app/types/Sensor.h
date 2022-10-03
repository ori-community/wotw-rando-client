#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Sensor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Sensor__Class** type_info;
        inline app::Sensor__Class* get_class() {
            return il2cpp::get_class<app::Sensor__Class>(type_info, "Moon", "Sensor");
        }
        inline app::Sensor* create() {
            return il2cpp::create_object<app::Sensor>(get_class());
        }
    } // namespace Sensor
} // namespace app::classes::types
