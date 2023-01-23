#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioDataCaptureAgent__Class.h>
#include <Modloader/app/structs/AudioDataCaptureAgent.h>

namespace app::classes::types {
    namespace AudioDataCaptureAgent {
        namespace {
            inline app::AudioDataCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::AudioDataCaptureAgent__Class** type_info = &type_info_ref;
        inline app::AudioDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::AudioDataCaptureAgent__Class>(type_info, "", "AudioDataCaptureAgent");
        }
        inline app::AudioDataCaptureAgent* create() {
            return il2cpp::create_object<app::AudioDataCaptureAgent>(get_class());
        }
    } // namespace AudioDataCaptureAgent
} // namespace app::classes::types
