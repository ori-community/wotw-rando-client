#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightRadialVisualAffector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritLightRadialVisualAffector__Class** type_info;
        inline app::SpiritLightRadialVisualAffector__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightRadialVisualAffector__Class>(type_info, "", "SpiritLightRadialVisualAffector");
        }
        inline app::SpiritLightRadialVisualAffector* create() {
            return il2cpp::create_object<app::SpiritLightRadialVisualAffector>(get_class());
        }
        inline app::SpiritLightRadialVisualAffector__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLightRadialVisualAffector__Array>(get_class(), size);
        }
    } // namespace SpiritLightRadialVisualAffector
} // namespace app::classes::types
