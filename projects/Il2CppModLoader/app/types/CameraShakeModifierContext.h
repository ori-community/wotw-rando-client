#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraShakeModifierContext {
        inline app::CameraShakeModifierContext__Class** type_info = (app::CameraShakeModifierContext__Class**)(modloader::win::memory::resolve_rva(0x04721EA0));
        inline app::CameraShakeModifierContext__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeModifierContext__Class>(type_info, "Moon", "CameraShakeModifierContext");
        }
        inline app::CameraShakeModifierContext* create() {
            return il2cpp::create_object<app::CameraShakeModifierContext>(get_class());
        }
    } // namespace CameraShakeModifierContext
} // namespace app::classes::types
