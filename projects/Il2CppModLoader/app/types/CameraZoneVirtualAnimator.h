#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraZoneVirtualAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraZoneVirtualAnimator__Class** type_info;
        inline app::CameraZoneVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraZoneVirtualAnimator__Class>(type_info, "Moon.Timeline.virtualAnimators", "CameraZoneVirtualAnimator");
        }
        inline app::CameraZoneVirtualAnimator* create() {
            return il2cpp::create_object<app::CameraZoneVirtualAnimator>(get_class());
        }
    } // namespace CameraZoneVirtualAnimator
} // namespace app::classes::types
