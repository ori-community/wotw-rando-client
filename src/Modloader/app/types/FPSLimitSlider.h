#pragma once
#include <Modloader/app/structs/FPSLimitSlider.h>
#include <Modloader/app/structs/FPSLimitSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSLimitSlider {
        inline app::FPSLimitSlider__Class** type_info() {
            static app::FPSLimitSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSLimitSlider__Class**)(modloader::win::memory::resolve_rva(0x0473AB58));
            }
            return cache;
        }
        inline app::FPSLimitSlider__Class* get_class() {
            return il2cpp::get_class<app::FPSLimitSlider__Class>(type_info(), "", "FPSLimitSlider");
        }
        inline app::FPSLimitSlider* create() {
            return il2cpp::create_object<app::FPSLimitSlider>(get_class());
        }
    } // namespace FPSLimitSlider
} // namespace app::classes::types
