#pragma once
#include <Modloader/app/structs/EulerXYZRotationTweenAnimator.h>
#include <Modloader/app/structs/EulerXYZRotationTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EulerXYZRotationTweenAnimator {
        inline app::EulerXYZRotationTweenAnimator__Class** type_info() {
            static app::EulerXYZRotationTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EulerXYZRotationTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x04714598));
            }
            return cache;
        }
        inline app::EulerXYZRotationTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerXYZRotationTweenAnimator__Class>(type_info(), "Moon.Timeline", "EulerXYZRotationTweenAnimator");
        }
        inline app::EulerXYZRotationTweenAnimator* create() {
            return il2cpp::create_object<app::EulerXYZRotationTweenAnimator>(get_class());
        }
    } // namespace EulerXYZRotationTweenAnimator
} // namespace app::classes::types
