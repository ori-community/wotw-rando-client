#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightCapsuleVisualAffector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritLightCapsuleVisualAffector__Class** type_info;
        inline app::SpiritLightCapsuleVisualAffector__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightCapsuleVisualAffector__Class>(type_info, "", "SpiritLightCapsuleVisualAffector");
        }
        inline app::SpiritLightCapsuleVisualAffector* create() {
            return il2cpp::create_object<app::SpiritLightCapsuleVisualAffector>(get_class());
        }
        inline app::SpiritLightCapsuleVisualAffector__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLightCapsuleVisualAffector__Array>(get_class(), size);
        }
    } // namespace SpiritLightCapsuleVisualAffector
} // namespace app::classes::types
