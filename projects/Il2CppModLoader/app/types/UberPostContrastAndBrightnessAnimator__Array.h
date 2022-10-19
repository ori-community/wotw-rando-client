#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPostContrastAndBrightnessAnimator__Array {
        namespace {
            inline app::UberPostContrastAndBrightnessAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPostContrastAndBrightnessAnimator__Array__Class** type_info = &type_info_ref;
        inline app::UberPostContrastAndBrightnessAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPostContrastAndBrightnessAnimator__Array__Class>(type_info, "", "UberPostContrastAndBrightnessAnimator[]");
        }
        inline app::UberPostContrastAndBrightnessAnimator__Array* create() {
            return il2cpp::create_object<app::UberPostContrastAndBrightnessAnimator__Array>(get_class());
        }
    } // namespace UberPostContrastAndBrightnessAnimator__Array
} // namespace app::classes::types
