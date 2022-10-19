#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraShakeLogic {
        inline app::CameraShakeLogic__Class** type_info = (app::CameraShakeLogic__Class**)(modloader::win::memory::resolve_rva(0x0473BB38));
        inline app::CameraShakeLogic__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeLogic__Class>(type_info, "", "CameraShakeLogic");
        }
        inline app::CameraShakeLogic* create() {
            return il2cpp::create_object<app::CameraShakeLogic>(get_class());
        }
    } // namespace CameraShakeLogic
} // namespace app::classes::types
