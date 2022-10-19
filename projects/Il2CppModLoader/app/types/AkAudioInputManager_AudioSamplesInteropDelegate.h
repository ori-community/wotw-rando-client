#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioSamplesInteropDelegate {
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate__Class** type_info = (app::AkAudioInputManager_AudioSamplesInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x047744E8));
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioSamplesInteropDelegate__Class>(type_info, "", "AkAudioInputManager", "AudioSamplesInteropDelegate");
        }
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioSamplesInteropDelegate>(get_class());
        }
    } // namespace AkAudioInputManager_AudioSamplesInteropDelegate
} // namespace app::classes::types
