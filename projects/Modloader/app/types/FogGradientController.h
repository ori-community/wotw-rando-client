#pragma once
#include <Modloader/app/structs/FogGradientController.h>
#include <Modloader/app/structs/FogGradientController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FogGradientController {
        inline app::FogGradientController__Class** type_info() {
            static app::FogGradientController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FogGradientController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FogGradientController__Class* get_class() {
            return il2cpp::get_class<app::FogGradientController__Class>(type_info(), "", "FogGradientController");
        }
        inline app::FogGradientController* create() {
            return il2cpp::create_object<app::FogGradientController>(get_class());
        }
    } // namespace FogGradientController
} // namespace app::classes::types
