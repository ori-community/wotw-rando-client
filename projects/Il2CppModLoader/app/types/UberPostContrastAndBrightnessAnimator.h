#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPostContrastAndBrightnessAnimator {
        inline app::UberPostContrastAndBrightnessAnimator__Class** type_info = (app::UberPostContrastAndBrightnessAnimator__Class**)(modloader::win::memory::resolve_rva(0x047094B8));
        inline app::UberPostContrastAndBrightnessAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostContrastAndBrightnessAnimator__Class>(type_info, "", "UberPostContrastAndBrightnessAnimator");
        }
        inline app::UberPostContrastAndBrightnessAnimator* create() {
            return il2cpp::create_object<app::UberPostContrastAndBrightnessAnimator>(get_class());
        }
        inline app::UberPostContrastAndBrightnessAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPostContrastAndBrightnessAnimator__Array>(get_class(), size);
        }
        inline app::UberPostContrastAndBrightnessAnimator__Array* create_array(const std::vector<app::UberPostContrastAndBrightnessAnimator*>& items) {
            return il2cpp::array_new<app::UberPostContrastAndBrightnessAnimator__Array>(get_class(), items);
        }
    } // namespace UberPostContrastAndBrightnessAnimator
} // namespace app::classes::types
