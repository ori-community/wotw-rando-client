#pragma once
#include <Modloader/app/structs/OptionsScreenLegendController.h>
#include <Modloader/app/structs/OptionsScreenLegendController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionsScreenLegendController {
        inline app::OptionsScreenLegendController__Class** type_info() {
            static app::OptionsScreenLegendController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OptionsScreenLegendController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OptionsScreenLegendController__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreenLegendController__Class>(type_info(), "", "OptionsScreenLegendController");
        }
        inline app::OptionsScreenLegendController* create() {
            return il2cpp::create_object<app::OptionsScreenLegendController>(get_class());
        }
    } // namespace OptionsScreenLegendController
} // namespace app::classes::types
