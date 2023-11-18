#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLavaController.h>
#include <Modloader/app/structs/PetrifiedOwlBossLavaController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLavaController {
        inline app::PetrifiedOwlBossLavaController__Class** type_info() {
            static app::PetrifiedOwlBossLavaController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossLavaController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLavaController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLavaController__Class>(type_info(), "", "PetrifiedOwlBossLavaController");
        }
        inline app::PetrifiedOwlBossLavaController* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLavaController>(get_class());
        }
    } // namespace PetrifiedOwlBossLavaController
} // namespace app::classes::types
