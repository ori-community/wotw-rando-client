#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioFormatInteropDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAudioInputManager_AudioFormatInteropDelegate__Class** type_info;
        inline app::AkAudioInputManager_AudioFormatInteropDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioFormatInteropDelegate__Class>(type_info, "", "AkAudioInputManager", "AudioFormatInteropDelegate");
        }
        inline app::AkAudioInputManager_AudioFormatInteropDelegate* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioFormatInteropDelegate>(get_class());
        }
    } // namespace AkAudioInputManager_AudioFormatInteropDelegate
} // namespace app::classes::types
