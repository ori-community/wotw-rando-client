#pragma once
#include <Modloader/app/structs/DisplayScaleSlider.h>
#include <Modloader/app/structs/DisplayScaleSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisplayScaleSlider {
        inline app::DisplayScaleSlider__Class** type_info() {
            static app::DisplayScaleSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DisplayScaleSlider__Class**)(modloader::win::memory::resolve_rva(0x04798D68));
            }
            return cache;
        }
        inline app::DisplayScaleSlider__Class* get_class() {
            return il2cpp::get_class<app::DisplayScaleSlider__Class>(type_info(), "", "DisplayScaleSlider");
        }
        inline app::DisplayScaleSlider* create() {
            return il2cpp::create_object<app::DisplayScaleSlider>(get_class());
        }
    } // namespace DisplayScaleSlider
} // namespace app::classes::types
