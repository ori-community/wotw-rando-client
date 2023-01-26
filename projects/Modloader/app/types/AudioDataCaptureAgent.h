#pragma once
#include <Modloader/app/structs/AudioDataCaptureAgent.h>
#include <Modloader/app/structs/AudioDataCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioDataCaptureAgent {
        inline app::AudioDataCaptureAgent__Class** type_info() {
            static app::AudioDataCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioDataCaptureAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::AudioDataCaptureAgent__Class>(type_info(), "", "AudioDataCaptureAgent");
        }
        inline app::AudioDataCaptureAgent* create() {
            return il2cpp::create_object<app::AudioDataCaptureAgent>(get_class());
        }
    } // namespace AudioDataCaptureAgent
} // namespace app::classes::types
