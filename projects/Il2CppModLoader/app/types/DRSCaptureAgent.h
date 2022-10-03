#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DRSCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DRSCaptureAgent__Class** type_info;
        inline app::DRSCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::DRSCaptureAgent__Class>(type_info, "", "DRSCaptureAgent");
        }
        inline app::DRSCaptureAgent* create() {
            return il2cpp::create_object<app::DRSCaptureAgent>(get_class());
        }
    } // namespace DRSCaptureAgent
} // namespace app::classes::types
