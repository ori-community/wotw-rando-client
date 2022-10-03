#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSampleProvider_ConsumeSampleFramesNativeFunction {
        namespace {
            app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class* type_info_ref = nullptr;
        }
        app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class** type_info = &type_info_ref;
        inline app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioSampleProvider_ConsumeSampleFramesNativeFunction__Class>(type_info, "UnityEngine.Experimental.Audio", "AudioSampleProvider", "ConsumeSampleFramesNativeFunction");
        }
        inline app::AudioSampleProvider_ConsumeSampleFramesNativeFunction* create() {
            return il2cpp::create_object<app::AudioSampleProvider_ConsumeSampleFramesNativeFunction>(get_class());
        }
    } // namespace AudioSampleProvider_ConsumeSampleFramesNativeFunction
} // namespace app::classes::types
