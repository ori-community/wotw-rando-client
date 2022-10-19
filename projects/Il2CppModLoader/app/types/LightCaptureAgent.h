#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCaptureAgent {
        inline app::LightCaptureAgent__Class** type_info = (app::LightCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0475A750));
        inline app::LightCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::LightCaptureAgent__Class>(type_info, "", "LightCaptureAgent");
        }
        inline app::LightCaptureAgent* create() {
            return il2cpp::create_object<app::LightCaptureAgent>(get_class());
        }
    } // namespace LightCaptureAgent
} // namespace app::classes::types
