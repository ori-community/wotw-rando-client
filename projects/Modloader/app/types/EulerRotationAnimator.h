#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EulerRotationAnimator {
        namespace {
            inline app::EulerRotationAnimator__Class* type_info_ref = nullptr;
        }
        inline app::EulerRotationAnimator__Class** type_info = &type_info_ref;
        inline app::EulerRotationAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerRotationAnimator__Class>(type_info, "", "EulerRotationAnimator");
        }
        inline app::EulerRotationAnimator* create() {
            return il2cpp::create_object<app::EulerRotationAnimator>(get_class());
        }
    } // namespace EulerRotationAnimator
} // namespace app::classes::types
