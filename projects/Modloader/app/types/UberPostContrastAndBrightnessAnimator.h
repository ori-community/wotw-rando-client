#pragma once
#include <Modloader/app/structs/UberPostContrastAndBrightnessAnimator.h>
#include <Modloader/app/structs/UberPostContrastAndBrightnessAnimator__Array.h>
#include <Modloader/app/structs/UberPostContrastAndBrightnessAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostContrastAndBrightnessAnimator {
        inline app::UberPostContrastAndBrightnessAnimator__Class** type_info() {
            static app::UberPostContrastAndBrightnessAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPostContrastAndBrightnessAnimator__Class**)(modloader::win::memory::resolve_rva(0x047094B8));
            }
            return cache;
        }
        inline app::UberPostContrastAndBrightnessAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostContrastAndBrightnessAnimator__Class>(type_info(), "", "UberPostContrastAndBrightnessAnimator");
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
