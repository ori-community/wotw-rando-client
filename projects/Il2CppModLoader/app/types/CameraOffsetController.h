#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraOffsetController {
        inline app::CameraOffsetController__Class** type_info = (app::CameraOffsetController__Class**)(modloader::win::memory::resolve_rva(0x0474F1F0));
        inline app::CameraOffsetController__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetController__Class>(type_info, "", "CameraOffsetController");
        }
        inline app::CameraOffsetController* create() {
            return il2cpp::create_object<app::CameraOffsetController>(get_class());
        }
    } // namespace CameraOffsetController
} // namespace app::classes::types
