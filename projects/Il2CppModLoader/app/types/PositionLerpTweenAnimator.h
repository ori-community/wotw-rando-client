#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionLerpTweenAnimator {
        namespace {
            inline app::PositionLerpTweenAnimator__Class* type_info_ref = nullptr;
        }
        inline app::PositionLerpTweenAnimator__Class** type_info = &type_info_ref;
        inline app::PositionLerpTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionLerpTweenAnimator__Class>(type_info, "Moon", "PositionLerpTweenAnimator");
        }
        inline app::PositionLerpTweenAnimator* create() {
            return il2cpp::create_object<app::PositionLerpTweenAnimator>(get_class());
        }
    } // namespace PositionLerpTweenAnimator
} // namespace app::classes::types
