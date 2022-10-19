#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DistortionAnimator {
        namespace {
            inline app::DistortionAnimator__Class* type_info_ref = nullptr;
        }
        inline app::DistortionAnimator__Class** type_info = &type_info_ref;
        inline app::DistortionAnimator__Class* get_class() {
            return il2cpp::get_class<app::DistortionAnimator__Class>(type_info, "", "DistortionAnimator");
        }
        inline app::DistortionAnimator* create() {
            return il2cpp::create_object<app::DistortionAnimator>(get_class());
        }
    } // namespace DistortionAnimator
} // namespace app::classes::types
