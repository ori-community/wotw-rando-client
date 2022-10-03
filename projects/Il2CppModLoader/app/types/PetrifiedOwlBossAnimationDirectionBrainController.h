#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossAnimationDirectionBrainController {
        namespace {
            app::PetrifiedOwlBossAnimationDirectionBrainController__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossAnimationDirectionBrainController__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossAnimationDirectionBrainController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossAnimationDirectionBrainController__Class>(type_info, "", "PetrifiedOwlBossAnimationDirectionBrainController");
        }
        inline app::PetrifiedOwlBossAnimationDirectionBrainController* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossAnimationDirectionBrainController>(get_class());
        }
    } // namespace PetrifiedOwlBossAnimationDirectionBrainController
} // namespace app::classes::types
