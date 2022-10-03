#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectContainer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffectContainer_c__Class** type_info;
        inline app::VolumeEffectContainer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectContainer_c__Class>(type_info, "AmplifyColor", "VolumeEffectContainer", "<>c");
        }
        inline app::VolumeEffectContainer_c* create() {
            return il2cpp::create_object<app::VolumeEffectContainer_c>(get_class());
        }
    } // namespace VolumeEffectContainer_c
} // namespace app::classes::types
