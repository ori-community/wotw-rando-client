#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_SoundVolumes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundComposition_SoundVolumes__Class** type_info;
        inline app::SoundComposition_SoundVolumes__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundComposition_SoundVolumes__Class>(type_info, "Core", "SoundComposition", "SoundVolumes");
        }
        inline app::SoundComposition_SoundVolumes* create() {
            return il2cpp::create_object<app::SoundComposition_SoundVolumes>(get_class());
        }
    } // namespace SoundComposition_SoundVolumes
} // namespace app::classes::types
