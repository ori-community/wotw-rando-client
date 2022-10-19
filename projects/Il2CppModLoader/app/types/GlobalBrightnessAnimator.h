#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalBrightnessAnimator {
        namespace {
            inline app::GlobalBrightnessAnimator__Class* type_info_ref = nullptr;
        }
        inline app::GlobalBrightnessAnimator__Class** type_info = &type_info_ref;
        inline app::GlobalBrightnessAnimator__Class* get_class() {
            return il2cpp::get_class<app::GlobalBrightnessAnimator__Class>(type_info, "", "GlobalBrightnessAnimator");
        }
        inline app::GlobalBrightnessAnimator* create() {
            return il2cpp::create_object<app::GlobalBrightnessAnimator>(get_class());
        }
    } // namespace GlobalBrightnessAnimator
} // namespace app::classes::types
