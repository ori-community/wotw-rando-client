#pragma once
#include <Modloader/app/structs/AudioSampleProvider_ConsumeSampleFramesNativeFunction.h>
#include <Modloader/app/structs/AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSampleProvider_ConsumeSampleFramesNativeFunction {
        inline app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class** type_info() {
            static app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class>(type_info(), "UnityEngine.Experimental.Audio", "AudioSampleProvider", "ConsumeSampleFramesNativeFunction");
        }
        inline app::AudioSampleProvider_ConsumeSampleFramesNativeFunction* create() {
            return il2cpp::create_object<app::AudioSampleProvider_ConsumeSampleFramesNativeFunction>(get_class());
        }
    } // namespace AudioSampleProvider_ConsumeSampleFramesNativeFunction
} // namespace app::classes::types
