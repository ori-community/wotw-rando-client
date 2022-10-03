#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionsScreenLegendController {
        namespace {
            app::OptionsScreenLegendController__Class* type_info_ref = nullptr;
        }
        app::OptionsScreenLegendController__Class** type_info = &type_info_ref;
        inline app::OptionsScreenLegendController__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreenLegendController__Class>(type_info, "", "OptionsScreenLegendController");
        }
        inline app::OptionsScreenLegendController* create() {
            return il2cpp::create_object<app::OptionsScreenLegendController>(get_class());
        }
    } // namespace OptionsScreenLegendController
} // namespace app::classes::types
