#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberBrightnessContrastAnimator__Class.h>
#include <Modloader/app/structs/UberBrightnessContrastAnimator.h>
#include <Modloader/app/structs/UberBrightnessContrastAnimator__Array.h>

namespace app::classes::types {
    namespace UberBrightnessContrastAnimator {
        inline app::UberBrightnessContrastAnimator__Class** type_info = (app::UberBrightnessContrastAnimator__Class**)(modloader::win::memory::resolve_rva(0x04792A38));
        inline app::UberBrightnessContrastAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberBrightnessContrastAnimator__Class>(type_info, "", "UberBrightnessContrastAnimator");
        }
        inline app::UberBrightnessContrastAnimator* create() {
            return il2cpp::create_object<app::UberBrightnessContrastAnimator>(get_class());
        }
        inline app::UberBrightnessContrastAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberBrightnessContrastAnimator__Array>(get_class(), size);
        }
        inline app::UberBrightnessContrastAnimator__Array* create_array(const std::vector<app::UberBrightnessContrastAnimator*>& items) {
            return il2cpp::array_new<app::UberBrightnessContrastAnimator__Array>(get_class(), items);
        }
    } // namespace UberBrightnessContrastAnimator
} // namespace app::classes::types
