#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraShakeAnimator {
        inline app::CameraShakeAnimator__Class** type_info = (app::CameraShakeAnimator__Class**)(modloader::win::memory::resolve_rva(0x0473ACD0));
        inline app::CameraShakeAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAnimator__Class>(type_info, "Moon.Timeline", "CameraShakeAnimator");
        }
        inline app::CameraShakeAnimator* create() {
            return il2cpp::create_object<app::CameraShakeAnimator>(get_class());
        }
        inline app::CameraShakeAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraShakeAnimator__Array>(get_class(), size);
        }
        inline app::CameraShakeAnimator__Array* create_array(const std::vector<app::CameraShakeAnimator*>& items) {
            return il2cpp::array_new<app::CameraShakeAnimator__Array>(get_class(), items);
        }
    } // namespace CameraShakeAnimator
} // namespace app::classes::types
