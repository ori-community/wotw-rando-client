#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectComponentFlags_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffectComponentFlags_c__Class** type_info;
        inline app::VolumeEffectComponentFlags_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectComponentFlags_c__Class>(type_info, "AmplifyColor", "VolumeEffectComponentFlags", "<>c");
        }
        inline app::VolumeEffectComponentFlags_c* create() {
            return il2cpp::create_object<app::VolumeEffectComponentFlags_c>(get_class());
        }
    } // namespace VolumeEffectComponentFlags_c
} // namespace app::classes::types
