#pragma once
#include <Modloader/app/structs/AudioPlayableOutput.h>
#include <Modloader/app/structs/AudioPlayableOutput__Boxed.h>
#include <Modloader/app/structs/AudioPlayableOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioPlayableOutput {
        inline app::AudioPlayableOutput__Class** type_info() {
            static app::AudioPlayableOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioPlayableOutput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioPlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::AudioPlayableOutput__Class>(type_info(), "UnityEngine.Audio", "AudioPlayableOutput");
        }
        inline app::AudioPlayableOutput* create() {
            return il2cpp::create_object<app::AudioPlayableOutput>(get_class());
        }
        inline app::AudioPlayableOutput__Boxed* box(app::AudioPlayableOutput value) {
            return il2cpp::box_value<app::AudioPlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace AudioPlayableOutput
} // namespace app::classes::types
