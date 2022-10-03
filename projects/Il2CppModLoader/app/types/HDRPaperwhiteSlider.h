#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HDRPaperwhiteSlider {
        namespace {
            app::HDRPaperwhiteSlider__Class* type_info_ref = nullptr;
        }
        app::HDRPaperwhiteSlider__Class** type_info = &type_info_ref;
        inline app::HDRPaperwhiteSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRPaperwhiteSlider__Class>(type_info, "", "HDRPaperwhiteSlider");
        }
        inline app::HDRPaperwhiteSlider* create() {
            return il2cpp::create_object<app::HDRPaperwhiteSlider>(get_class());
        }
    } // namespace HDRPaperwhiteSlider
} // namespace app::classes::types
