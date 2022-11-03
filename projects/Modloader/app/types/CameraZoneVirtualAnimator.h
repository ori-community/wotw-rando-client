#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraZoneVirtualAnimator {
        inline app::CameraZoneVirtualAnimator__Class** type_info = (app::CameraZoneVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0475A980));
        inline app::CameraZoneVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraZoneVirtualAnimator__Class>(type_info, "Moon.Timeline.virtualAnimators", "CameraZoneVirtualAnimator");
        }
        inline app::CameraZoneVirtualAnimator* create() {
            return il2cpp::create_object<app::CameraZoneVirtualAnimator>(get_class());
        }
    } // namespace CameraZoneVirtualAnimator
} // namespace app::classes::types
