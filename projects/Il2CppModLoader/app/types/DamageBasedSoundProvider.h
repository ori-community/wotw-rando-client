#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageBasedSoundProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageBasedSoundProvider__Class** type_info;
        inline app::DamageBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::DamageBasedSoundProvider__Class>(type_info, "", "DamageBasedSoundProvider");
        }
        inline app::DamageBasedSoundProvider* create() {
            return il2cpp::create_object<app::DamageBasedSoundProvider>(get_class());
        }
    } // namespace DamageBasedSoundProvider
} // namespace app::classes::types
