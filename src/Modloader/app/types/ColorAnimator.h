#pragma once
#include <Modloader/app/structs/ColorAnimator.h>
#include <Modloader/app/structs/ColorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorAnimator {
        inline app::ColorAnimator__Class** type_info() {
            static app::ColorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorAnimator__Class**)(modloader::win::memory::resolve_rva(0x0473C188));
            }
            return cache;
        }
        inline app::ColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimator__Class>(type_info(), "Moon.Timeline", "ColorAnimator");
        }
        inline app::ColorAnimator* create() {
            return il2cpp::create_object<app::ColorAnimator>(get_class());
        }
    } // namespace ColorAnimator
} // namespace app::classes::types
