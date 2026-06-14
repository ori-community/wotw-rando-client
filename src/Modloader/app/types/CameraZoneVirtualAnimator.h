#pragma once
#include <Modloader/app/structs/CameraZoneVirtualAnimator.h>
#include <Modloader/app/structs/CameraZoneVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraZoneVirtualAnimator {
        inline app::CameraZoneVirtualAnimator__Class** type_info() {
            static app::CameraZoneVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraZoneVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0475A980));
            }
            return cache;
        }
        inline app::CameraZoneVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraZoneVirtualAnimator__Class>(type_info(), "Moon.Timeline.virtualAnimators", "CameraZoneVirtualAnimator");
        }
        inline app::CameraZoneVirtualAnimator* create() {
            return il2cpp::create_object<app::CameraZoneVirtualAnimator>(get_class());
        }
    } // namespace CameraZoneVirtualAnimator
} // namespace app::classes::types
