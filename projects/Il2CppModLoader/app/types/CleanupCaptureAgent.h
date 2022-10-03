#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleanupCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleanupCaptureAgent__Class** type_info;
        inline app::CleanupCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::CleanupCaptureAgent__Class>(type_info, "", "CleanupCaptureAgent");
        }
        inline app::CleanupCaptureAgent* create() {
            return il2cpp::create_object<app::CleanupCaptureAgent>(get_class());
        }
    } // namespace CleanupCaptureAgent
} // namespace app::classes::types
