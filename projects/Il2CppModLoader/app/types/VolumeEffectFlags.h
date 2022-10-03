#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectFlags {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffectFlags__Class** type_info;
        inline app::VolumeEffectFlags__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectFlags__Class>(type_info, "AmplifyColor", "VolumeEffectFlags");
        }
        inline app::VolumeEffectFlags* create() {
            return il2cpp::create_object<app::VolumeEffectFlags>(get_class());
        }
    } // namespace VolumeEffectFlags
} // namespace app::classes::types
