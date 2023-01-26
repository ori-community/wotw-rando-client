#pragma once
#include <Modloader/app/structs/AudioSampleProvider_SampleFramesHandler.h>
#include <Modloader/app/structs/AudioSampleProvider_SampleFramesHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSampleProvider_SampleFramesHandler {
        inline app::AudioSampleProvider_SampleFramesHandler__Class** type_info() {
            static app::AudioSampleProvider_SampleFramesHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSampleProvider_SampleFramesHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSampleProvider_SampleFramesHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioSampleProvider_SampleFramesHandler__Class>(type_info(), "UnityEngine.Experimental.Audio", "AudioSampleProvider", "SampleFramesHandler");
        }
        inline app::AudioSampleProvider_SampleFramesHandler* create() {
            return il2cpp::create_object<app::AudioSampleProvider_SampleFramesHandler>(get_class());
        }
    } // namespace AudioSampleProvider_SampleFramesHandler
} // namespace app::classes::types
