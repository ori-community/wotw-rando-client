#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundListener__Class** type_info;
        inline app::SoundListener__Class* get_class() {
            return il2cpp::get_class<app::SoundListener__Class>(type_info, "Moon.Wwise", "SoundListener");
        }
        inline app::SoundListener* create() {
            return il2cpp::create_object<app::SoundListener>(get_class());
        }
    } // namespace SoundListener
} // namespace app::classes::types
