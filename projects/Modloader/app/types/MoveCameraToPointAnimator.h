#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveCameraToPointAnimator {
        namespace {
            inline app::MoveCameraToPointAnimator__Class* type_info_ref = nullptr;
        }
        inline app::MoveCameraToPointAnimator__Class** type_info = &type_info_ref;
        inline app::MoveCameraToPointAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraToPointAnimator__Class>(type_info, "Moon.Timeline", "MoveCameraToPointAnimator");
        }
        inline app::MoveCameraToPointAnimator* create() {
            return il2cpp::create_object<app::MoveCameraToPointAnimator>(get_class());
        }
    } // namespace MoveCameraToPointAnimator
} // namespace app::classes::types
