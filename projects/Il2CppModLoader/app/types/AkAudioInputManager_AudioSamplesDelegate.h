#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioSamplesDelegate {
        namespace {
            inline app::AkAudioInputManager_AudioSamplesDelegate__Class* type_info_ref = nullptr;
        }
        inline app::AkAudioInputManager_AudioSamplesDelegate__Class** type_info = &type_info_ref;
        inline app::AkAudioInputManager_AudioSamplesDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioSamplesDelegate__Class>(type_info, "", "AkAudioInputManager", "AudioSamplesDelegate");
        }
        inline app::AkAudioInputManager_AudioSamplesDelegate* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioSamplesDelegate>(get_class());
        }
        inline app::AkAudioInputManager_AudioSamplesDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::AkAudioInputManager_AudioSamplesDelegate__Array>(get_class(), size);
        }
        inline app::AkAudioInputManager_AudioSamplesDelegate__Array* create_array(const std::vector<app::AkAudioInputManager_AudioSamplesDelegate*>& items) {
            return il2cpp::array_new<app::AkAudioInputManager_AudioSamplesDelegate__Array>(get_class(), items);
        }
    } // namespace AkAudioInputManager_AudioSamplesDelegate
} // namespace app::classes::types
