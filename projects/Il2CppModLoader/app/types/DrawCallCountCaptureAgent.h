#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrawCallCountCaptureAgent {
        inline app::DrawCallCountCaptureAgent__Class** type_info = (app::DrawCallCountCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0476ABF8));
        inline app::DrawCallCountCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::DrawCallCountCaptureAgent__Class>(type_info, "", "DrawCallCountCaptureAgent");
        }
        inline app::DrawCallCountCaptureAgent* create() {
            return il2cpp::create_object<app::DrawCallCountCaptureAgent>(get_class());
        }
    } // namespace DrawCallCountCaptureAgent
} // namespace app::classes::types
