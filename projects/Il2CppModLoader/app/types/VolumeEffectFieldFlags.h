#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectFieldFlags {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffectFieldFlags__Class** type_info;
        inline app::VolumeEffectFieldFlags__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectFieldFlags__Class>(type_info, "AmplifyColor", "VolumeEffectFieldFlags");
        }
        inline app::VolumeEffectFieldFlags* create() {
            return il2cpp::create_object<app::VolumeEffectFieldFlags>(get_class());
        }
        inline app::VolumeEffectFieldFlags__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffectFieldFlags__Array>(get_class(), size);
        }
    } // namespace VolumeEffectFieldFlags
} // namespace app::classes::types
