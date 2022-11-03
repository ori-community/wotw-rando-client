#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Glow_Glow_Color {
        inline app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class** type_info = (app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class**)(modloader::win::memory::resolve_rva(0x0478AC40));
        inline app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class>(type_info, "", "ShaderID_CameraFilterPack_Glow_Glow_Color");
        }
        inline app::ShaderID_CameraFilterPack_Glow_Glow_Color* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Glow_Glow_Color>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Glow_Glow_Color
} // namespace app::classes::types
