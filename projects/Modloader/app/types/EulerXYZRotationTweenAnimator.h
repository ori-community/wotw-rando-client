#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EulerXYZRotationTweenAnimator {
        inline app::EulerXYZRotationTweenAnimator__Class** type_info = (app::EulerXYZRotationTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x04714598));
        inline app::EulerXYZRotationTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerXYZRotationTweenAnimator__Class>(type_info, "Moon.Timeline", "EulerXYZRotationTweenAnimator");
        }
        inline app::EulerXYZRotationTweenAnimator* create() {
            return il2cpp::create_object<app::EulerXYZRotationTweenAnimator>(get_class());
        }
    } // namespace EulerXYZRotationTweenAnimator
} // namespace app::classes::types
