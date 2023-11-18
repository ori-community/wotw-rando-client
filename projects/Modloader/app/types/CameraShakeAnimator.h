#pragma once
#include <Modloader/app/structs/CameraShakeAnimator.h>
#include <Modloader/app/structs/CameraShakeAnimator__Array.h>
#include <Modloader/app/structs/CameraShakeAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraShakeAnimator {
        inline app::CameraShakeAnimator__Class** type_info() {
            static app::CameraShakeAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraShakeAnimator__Class**)(modloader::win::memory::resolve_rva(0x0473ACD0));
            }
            return cache;
        }
        inline app::CameraShakeAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAnimator__Class>(type_info(), "Moon.Timeline", "CameraShakeAnimator");
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
