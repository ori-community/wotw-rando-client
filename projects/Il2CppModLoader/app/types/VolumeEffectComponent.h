#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffectComponent__Class** type_info;
        inline app::VolumeEffectComponent__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectComponent__Class>(type_info, "AmplifyColor", "VolumeEffectComponent");
        }
        inline app::VolumeEffectComponent* create() {
            return il2cpp::create_object<app::VolumeEffectComponent>(get_class());
        }
        inline app::VolumeEffectComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffectComponent__Array>(get_class(), size);
        }
    } // namespace VolumeEffectComponent
} // namespace app::classes::types
