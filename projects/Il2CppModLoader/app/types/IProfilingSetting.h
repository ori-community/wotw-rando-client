#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IProfilingSetting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IProfilingSetting__Class** type_info;
        inline app::IProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::IProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "IProfilingSetting");
        }
        inline app::IProfilingSetting* create() {
            return il2cpp::create_object<app::IProfilingSetting>(get_class());
        }
        inline app::IProfilingSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::IProfilingSetting__Array>(get_class(), size);
        }
    } // namespace IProfilingSetting
} // namespace app::classes::types
