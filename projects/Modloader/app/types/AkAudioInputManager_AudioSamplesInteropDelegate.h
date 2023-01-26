#pragma once
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesInteropDelegate.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesInteropDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioSamplesInteropDelegate {
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate__Class** type_info() {
            static app::AkAudioInputManager_AudioSamplesInteropDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkAudioInputManager_AudioSamplesInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x047744E8));
            }
            return cache;
        }
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioSamplesInteropDelegate__Class>(type_info(), "", "AkAudioInputManager", "AudioSamplesInteropDelegate");
        }
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioSamplesInteropDelegate>(get_class());
        }
    } // namespace AkAudioInputManager_AudioSamplesInteropDelegate
} // namespace app::classes::types
