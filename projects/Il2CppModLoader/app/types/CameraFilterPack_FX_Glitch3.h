#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Glitch3 {
        inline app::CameraFilterPack_FX_Glitch3__Class** type_info = (app::CameraFilterPack_FX_Glitch3__Class**)(modloader::win::memory::resolve_rva(0x04725FB8));
        inline app::CameraFilterPack_FX_Glitch3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Glitch3__Class>(type_info, "", "CameraFilterPack_FX_Glitch3");
        }
        inline app::CameraFilterPack_FX_Glitch3* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Glitch3>(get_class());
        }
    } // namespace CameraFilterPack_FX_Glitch3
} // namespace app::classes::types
