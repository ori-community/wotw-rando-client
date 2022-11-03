#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptionsScreenLegendController {
        namespace {
            inline app::OptionsScreenLegendController__Class* type_info_ref = nullptr;
        }
        inline app::OptionsScreenLegendController__Class** type_info = &type_info_ref;
        inline app::OptionsScreenLegendController__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreenLegendController__Class>(type_info, "", "OptionsScreenLegendController");
        }
        inline app::OptionsScreenLegendController* create() {
            return il2cpp::create_object<app::OptionsScreenLegendController>(get_class());
        }
    } // namespace OptionsScreenLegendController
} // namespace app::classes::types
