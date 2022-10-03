#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbientSoundZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AmbientSoundZone__Class** type_info;
        inline app::AmbientSoundZone__Class* get_class() {
            return il2cpp::get_class<app::AmbientSoundZone__Class>(type_info, "", "AmbientSoundZone");
        }
        inline app::AmbientSoundZone* create() {
            return il2cpp::create_object<app::AmbientSoundZone>(get_class());
        }
    } // namespace AmbientSoundZone
} // namespace app::classes::types
