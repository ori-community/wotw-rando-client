#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundPlayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundPlayer__Class** type_info;
        inline app::SoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::SoundPlayer__Class>(type_info, "", "SoundPlayer");
        }
        inline app::SoundPlayer* create() {
            return il2cpp::create_object<app::SoundPlayer>(get_class());
        }
        inline app::SoundPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundPlayer__Array>(get_class(), size);
        }
    } // namespace SoundPlayer
} // namespace app::classes::types
