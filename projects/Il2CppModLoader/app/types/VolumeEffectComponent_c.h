#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectComponent_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffectComponent_c__Class** type_info;
        inline app::VolumeEffectComponent_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectComponent_c__Class>(type_info, "AmplifyColor", "VolumeEffectComponent", "<>c");
        }
        inline app::VolumeEffectComponent_c* create() {
            return il2cpp::create_object<app::VolumeEffectComponent_c>(get_class());
        }
    } // namespace VolumeEffectComponent_c
} // namespace app::classes::types
