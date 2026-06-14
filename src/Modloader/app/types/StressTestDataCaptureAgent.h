#pragma once
#include <Modloader/app/structs/StressTestDataCaptureAgent.h>
#include <Modloader/app/structs/StressTestDataCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTestDataCaptureAgent {
        inline app::StressTestDataCaptureAgent__Class** type_info() {
            static app::StressTestDataCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTestDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04782680));
            }
            return cache;
        }
        inline app::StressTestDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::StressTestDataCaptureAgent__Class>(type_info(), "", "StressTestDataCaptureAgent");
        }
        inline app::StressTestDataCaptureAgent* create() {
            return il2cpp::create_object<app::StressTestDataCaptureAgent>(get_class());
        }
    } // namespace StressTestDataCaptureAgent
} // namespace app::classes::types
