#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioFormatInteropDelegate {
        inline app::AkAudioInputManager_AudioFormatInteropDelegate__Class** type_info = (app::AkAudioInputManager_AudioFormatInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x0471AF48));
        inline app::AkAudioInputManager_AudioFormatInteropDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioFormatInteropDelegate__Class>(type_info, "", "AkAudioInputManager", "AudioFormatInteropDelegate");
        }
        inline app::AkAudioInputManager_AudioFormatInteropDelegate* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioFormatInteropDelegate>(get_class());
        }
    } // namespace AkAudioInputManager_AudioFormatInteropDelegate
} // namespace app::classes::types
