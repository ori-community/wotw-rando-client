#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCaptureAgent__Class** type_info;
        inline app::LightCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::LightCaptureAgent__Class>(type_info, "", "LightCaptureAgent");
        }
        inline app::LightCaptureAgent* create() {
            return il2cpp::create_object<app::LightCaptureAgent>(get_class());
        }
    } // namespace LightCaptureAgent
} // namespace app::classes::types
