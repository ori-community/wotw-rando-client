#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioPlayableOutput__Class.h>
#include <Modloader/app/structs/AudioPlayableOutput.h>
#include <Modloader/app/structs/AudioPlayableOutput__Boxed.h>

namespace app::classes::types {
    namespace AudioPlayableOutput {
        namespace {
            inline app::AudioPlayableOutput__Class* type_info_ref = nullptr;
        }
        inline app::AudioPlayableOutput__Class** type_info = &type_info_ref;
        inline app::AudioPlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::AudioPlayableOutput__Class>(type_info, "UnityEngine.Audio", "AudioPlayableOutput");
        }
        inline app::AudioPlayableOutput* create() {
            return il2cpp::create_object<app::AudioPlayableOutput>(get_class());
        }
        inline app::AudioPlayableOutput__Boxed* box(app::AudioPlayableOutput value) {
            return il2cpp::box_value<app::AudioPlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace AudioPlayableOutput
} // namespace app::classes::types
