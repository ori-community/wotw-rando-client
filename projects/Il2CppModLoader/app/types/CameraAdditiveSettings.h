#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraAdditiveSettings {
        inline app::CameraAdditiveSettings__Class** type_info = (app::CameraAdditiveSettings__Class**)(modloader::win::memory::resolve_rva(0x047816E8));
        inline app::CameraAdditiveSettings__Class* get_class() {
            return il2cpp::get_class<app::CameraAdditiveSettings__Class>(type_info, "", "CameraAdditiveSettings");
        }
        inline app::CameraAdditiveSettings* create() {
            return il2cpp::create_object<app::CameraAdditiveSettings>(get_class());
        }
    } // namespace CameraAdditiveSettings
} // namespace app::classes::types
