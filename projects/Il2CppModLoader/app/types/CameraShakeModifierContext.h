#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraShakeModifierContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraShakeModifierContext__Class** type_info;
        inline app::CameraShakeModifierContext__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeModifierContext__Class>(type_info, "Moon", "CameraShakeModifierContext");
        }
        inline app::CameraShakeModifierContext* create() {
            return il2cpp::create_object<app::CameraShakeModifierContext>(get_class());
        }
    } // namespace CameraShakeModifierContext
} // namespace app::classes::types
