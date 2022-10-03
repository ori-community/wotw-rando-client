#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTestDataCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StressTestDataCaptureAgent__Class** type_info;
        inline app::StressTestDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::StressTestDataCaptureAgent__Class>(type_info, "", "StressTestDataCaptureAgent");
        }
        inline app::StressTestDataCaptureAgent* create() {
            return il2cpp::create_object<app::StressTestDataCaptureAgent>(get_class());
        }
    } // namespace StressTestDataCaptureAgent
} // namespace app::classes::types
