#pragma once
#include <Modloader/app/structs/SwitchGpuFreqCaptureAgent.h>
#include <Modloader/app/structs/SwitchGpuFreqCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchGpuFreqCaptureAgent {
        inline app::SwitchGpuFreqCaptureAgent__Class** type_info() {
            static app::SwitchGpuFreqCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchGpuFreqCaptureAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchGpuFreqCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SwitchGpuFreqCaptureAgent__Class>(type_info(), "", "SwitchGpuFreqCaptureAgent");
        }
        inline app::SwitchGpuFreqCaptureAgent* create() {
            return il2cpp::create_object<app::SwitchGpuFreqCaptureAgent>(get_class());
        }
    } // namespace SwitchGpuFreqCaptureAgent
} // namespace app::classes::types
