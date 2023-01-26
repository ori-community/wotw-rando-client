#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Glow_Glow_Color.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Glow_Glow_Color__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Glow_Glow_Color {
        inline app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class**)(modloader::win::memory::resolve_rva(0x0478AC40));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Glow_Glow_Color__Class>(type_info(), "", "ShaderID_CameraFilterPack_Glow_Glow_Color");
        }
        inline app::ShaderID_CameraFilterPack_Glow_Glow_Color* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Glow_Glow_Color>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Glow_Glow_Color
} // namespace app::classes::types
