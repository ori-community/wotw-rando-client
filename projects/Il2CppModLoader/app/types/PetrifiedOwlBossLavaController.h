#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLavaController {
        namespace {
            app::PetrifiedOwlBossLavaController__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossLavaController__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossLavaController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLavaController__Class>(type_info, "", "PetrifiedOwlBossLavaController");
        }
        inline app::PetrifiedOwlBossLavaController* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLavaController>(get_class());
        }
    } // namespace PetrifiedOwlBossLavaController
} // namespace app::classes::types
