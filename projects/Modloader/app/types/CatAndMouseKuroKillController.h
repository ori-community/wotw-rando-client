#pragma once
#include <Modloader/app/structs/CatAndMouseKuroKillController.h>
#include <Modloader/app/structs/CatAndMouseKuroKillController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseKuroKillController {
        inline app::CatAndMouseKuroKillController__Class** type_info() {
            static app::CatAndMouseKuroKillController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatAndMouseKuroKillController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatAndMouseKuroKillController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseKuroKillController__Class>(type_info(), "", "CatAndMouseKuroKillController");
        }
        inline app::CatAndMouseKuroKillController* create() {
            return il2cpp::create_object<app::CatAndMouseKuroKillController>(get_class());
        }
    } // namespace CatAndMouseKuroKillController
} // namespace app::classes::types
