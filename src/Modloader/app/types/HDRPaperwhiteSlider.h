#pragma once
#include <Modloader/app/structs/HDRPaperwhiteSlider.h>
#include <Modloader/app/structs/HDRPaperwhiteSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRPaperwhiteSlider {
        inline app::HDRPaperwhiteSlider__Class** type_info() {
            static app::HDRPaperwhiteSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDRPaperwhiteSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDRPaperwhiteSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRPaperwhiteSlider__Class>(type_info(), "", "HDRPaperwhiteSlider");
        }
        inline app::HDRPaperwhiteSlider* create() {
            return il2cpp::create_object<app::HDRPaperwhiteSlider>(get_class());
        }
    } // namespace HDRPaperwhiteSlider
} // namespace app::classes::types
