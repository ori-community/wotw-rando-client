#pragma once
#include <Modloader/app/structs/AkAudioInputManager_AudioFormatDelegate.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioFormatDelegate__Array.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioFormatDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioFormatDelegate {
        inline app::AkAudioInputManager_AudioFormatDelegate__Class** type_info() {
            static app::AkAudioInputManager_AudioFormatDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkAudioInputManager_AudioFormatDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkAudioInputManager_AudioFormatDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioFormatDelegate__Class>(type_info(), "", "AkAudioInputManager", "AudioFormatDelegate");
        }
        inline app::AkAudioInputManager_AudioFormatDelegate* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioFormatDelegate>(get_class());
        }
        inline app::AkAudioInputManager_AudioFormatDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::AkAudioInputManager_AudioFormatDelegate__Array>(get_class(), size);
        }
        inline app::AkAudioInputManager_AudioFormatDelegate__Array* create_array(const std::vector<app::AkAudioInputManager_AudioFormatDelegate*>& items) {
            return il2cpp::array_new<app::AkAudioInputManager_AudioFormatDelegate__Array>(get_class(), items);
        }
    } // namespace AkAudioInputManager_AudioFormatDelegate
} // namespace app::classes::types
