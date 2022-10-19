#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveCameraToPlayerAnimator {
        namespace {
            inline app::MoveCameraToPlayerAnimator__Class* type_info_ref = nullptr;
        }
        inline app::MoveCameraToPlayerAnimator__Class** type_info = &type_info_ref;
        inline app::MoveCameraToPlayerAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraToPlayerAnimator__Class>(type_info, "Moon.Timeline", "MoveCameraToPlayerAnimator");
        }
        inline app::MoveCameraToPlayerAnimator* create() {
            return il2cpp::create_object<app::MoveCameraToPlayerAnimator>(get_class());
        }
    } // namespace MoveCameraToPlayerAnimator
} // namespace app::classes::types
