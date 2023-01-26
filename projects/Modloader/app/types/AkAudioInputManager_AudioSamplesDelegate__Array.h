#pragma once
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesDelegate__Array.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesDelegate__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioSamplesDelegate__Array {
        inline app::AkAudioInputManager_AudioSamplesDelegate__Array__Class** type_info() {
            static app::AkAudioInputManager_AudioSamplesDelegate__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkAudioInputManager_AudioSamplesDelegate__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkAudioInputManager_AudioSamplesDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::AkAudioInputManager_AudioSamplesDelegate__Array__Class>(type_info(), "", "AkAudioInputManager+AudioSamplesDelegate[]");
        }
        inline app::AkAudioInputManager_AudioSamplesDelegate__Array* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioSamplesDelegate__Array>(get_class());
        }
    } // namespace AkAudioInputManager_AudioSamplesDelegate__Array
} // namespace app::classes::types
