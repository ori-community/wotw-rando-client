#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Glow_Glow_Color {
        inline app::CameraFilterPack_Glow_Glow_Color__Class** type_info = (app::CameraFilterPack_Glow_Glow_Color__Class**)(modloader::win::memory::resolve_rva(0x04776A68));
        inline app::CameraFilterPack_Glow_Glow_Color__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Glow_Glow_Color__Class>(type_info, "", "CameraFilterPack_Glow_Glow_Color");
        }
        inline app::CameraFilterPack_Glow_Glow_Color* create() {
            return il2cpp::create_object<app::CameraFilterPack_Glow_Glow_Color>(get_class());
        }
    } // namespace CameraFilterPack_Glow_Glow_Color
} // namespace app::classes::types
