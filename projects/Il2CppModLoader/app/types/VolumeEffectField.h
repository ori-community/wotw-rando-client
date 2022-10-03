#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectField {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffectField__Class** type_info;
        inline app::VolumeEffectField__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectField__Class>(type_info, "AmplifyColor", "VolumeEffectField");
        }
        inline app::VolumeEffectField* create() {
            return il2cpp::create_object<app::VolumeEffectField>(get_class());
        }
        inline app::VolumeEffectField__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffectField__Array>(get_class(), size);
        }
    } // namespace VolumeEffectField
} // namespace app::classes::types
