#pragma once
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesDelegate.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesDelegate__Array.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioSamplesDelegate {
        inline app::AkAudioInputManager_AudioSamplesDelegate__Class** type_info() {
            static app::AkAudioInputManager_AudioSamplesDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkAudioInputManager_AudioSamplesDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkAudioInputManager_AudioSamplesDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioSamplesDelegate__Class>(type_info(), "", "AkAudioInputManager", "AudioSamplesDelegate");
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
