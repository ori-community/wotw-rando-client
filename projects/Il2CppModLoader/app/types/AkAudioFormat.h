#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioFormat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAudioFormat__Class** type_info;
        inline app::AkAudioFormat__Class* get_class() {
            return il2cpp::get_class<app::AkAudioFormat__Class>(type_info, "", "AkAudioFormat");
        }
        inline app::AkAudioFormat* create() {
            return il2cpp::create_object<app::AkAudioFormat>(get_class());
        }
    } // namespace AkAudioFormat
} // namespace app::classes::types
