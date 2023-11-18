#pragma once
#include <Modloader/app/structs/LeverController.h>
#include <Modloader/app/structs/LeverController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverController {
        inline app::LeverController__Class** type_info() {
            static app::LeverController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverController__Class* get_class() {
            return il2cpp::get_class<app::LeverController__Class>(type_info(), "Moon.Setups.MoonLever", "LeverController");
        }
        inline app::LeverController* create() {
            return il2cpp::create_object<app::LeverController>(get_class());
        }
    } // namespace LeverController
} // namespace app::classes::types
