#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTestDataCaptureAgent {
        inline app::StressTestDataCaptureAgent__Class** type_info = (app::StressTestDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04782680));
        inline app::StressTestDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::StressTestDataCaptureAgent__Class>(type_info, "", "StressTestDataCaptureAgent");
        }
        inline app::StressTestDataCaptureAgent* create() {
            return il2cpp::create_object<app::StressTestDataCaptureAgent>(get_class());
        }
    } // namespace StressTestDataCaptureAgent
} // namespace app::classes::types
