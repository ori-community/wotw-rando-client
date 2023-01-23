#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwitchGpuFreqCaptureAgent__Class.h>
#include <Modloader/app/structs/SwitchGpuFreqCaptureAgent.h>

namespace app::classes::types {
    namespace SwitchGpuFreqCaptureAgent {
        namespace {
            inline app::SwitchGpuFreqCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::SwitchGpuFreqCaptureAgent__Class** type_info = &type_info_ref;
        inline app::SwitchGpuFreqCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SwitchGpuFreqCaptureAgent__Class>(type_info, "", "SwitchGpuFreqCaptureAgent");
        }
        inline app::SwitchGpuFreqCaptureAgent* create() {
            return il2cpp::create_object<app::SwitchGpuFreqCaptureAgent>(get_class());
        }
    } // namespace SwitchGpuFreqCaptureAgent
} // namespace app::classes::types
