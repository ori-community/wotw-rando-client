#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraSpeedAnimator__Class.h>
#include <Modloader/app/structs/CameraSpeedAnimator.h>

namespace app::classes::types {
    namespace CameraSpeedAnimator {
        inline app::CameraSpeedAnimator__Class** type_info = (app::CameraSpeedAnimator__Class**)(modloader::win::memory::resolve_rva(0x04779D28));
        inline app::CameraSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraSpeedAnimator__Class>(type_info, "Moon.Timeline", "CameraSpeedAnimator");
        }
        inline app::CameraSpeedAnimator* create() {
            return il2cpp::create_object<app::CameraSpeedAnimator>(get_class());
        }
    } // namespace CameraSpeedAnimator
} // namespace app::classes::types
