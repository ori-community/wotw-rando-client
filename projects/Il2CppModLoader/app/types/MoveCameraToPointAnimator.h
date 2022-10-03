#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveCameraToPointAnimator {
        namespace {
            app::MoveCameraToPointAnimator__Class* type_info_ref = nullptr;
        }
        app::MoveCameraToPointAnimator__Class** type_info = &type_info_ref;
        inline app::MoveCameraToPointAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraToPointAnimator__Class>(type_info, "Moon.Timeline", "MoveCameraToPointAnimator");
        }
        inline app::MoveCameraToPointAnimator* create() {
            return il2cpp::create_object<app::MoveCameraToPointAnimator>(get_class());
        }
    } // namespace MoveCameraToPointAnimator
} // namespace app::classes::types
