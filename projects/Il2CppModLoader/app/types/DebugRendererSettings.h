#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugRendererSettings {
        inline app::DebugRendererSettings__Class** type_info = (app::DebugRendererSettings__Class**)(modloader::win::memory::resolve_rva(0x0476CBB0));
        inline app::DebugRendererSettings__Class* get_class() {
            return il2cpp::get_class<app::DebugRendererSettings__Class>(type_info, "", "DebugRendererSettings");
        }
        inline app::DebugRendererSettings* create() {
            return il2cpp::create_object<app::DebugRendererSettings>(get_class());
        }
    } // namespace DebugRendererSettings
} // namespace app::classes::types
