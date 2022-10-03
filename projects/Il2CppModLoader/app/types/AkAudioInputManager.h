#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAudioInputManager__Class** type_info;
        inline app::AkAudioInputManager__Class* get_class() {
            return il2cpp::get_class<app::AkAudioInputManager__Class>(type_info, "", "AkAudioInputManager");
        }
        inline app::AkAudioInputManager* create() {
            return il2cpp::create_object<app::AkAudioInputManager>(get_class());
        }
    } // namespace AkAudioInputManager
} // namespace app::classes::types
