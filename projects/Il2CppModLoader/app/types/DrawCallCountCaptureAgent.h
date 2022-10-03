#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrawCallCountCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DrawCallCountCaptureAgent__Class** type_info;
        inline app::DrawCallCountCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::DrawCallCountCaptureAgent__Class>(type_info, "", "DrawCallCountCaptureAgent");
        }
        inline app::DrawCallCountCaptureAgent* create() {
            return il2cpp::create_object<app::DrawCallCountCaptureAgent>(get_class());
        }
    } // namespace DrawCallCountCaptureAgent
} // namespace app::classes::types
