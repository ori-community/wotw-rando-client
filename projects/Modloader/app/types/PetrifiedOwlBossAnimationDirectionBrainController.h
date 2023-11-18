#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossAnimationDirectionBrainController.h>
#include <Modloader/app/structs/PetrifiedOwlBossAnimationDirectionBrainController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossAnimationDirectionBrainController {
        inline app::PetrifiedOwlBossAnimationDirectionBrainController__Class** type_info() {
            static app::PetrifiedOwlBossAnimationDirectionBrainController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossAnimationDirectionBrainController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossAnimationDirectionBrainController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossAnimationDirectionBrainController__Class>(type_info(), "", "PetrifiedOwlBossAnimationDirectionBrainController");
        }
        inline app::PetrifiedOwlBossAnimationDirectionBrainController* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossAnimationDirectionBrainController>(get_class());
        }
    } // namespace PetrifiedOwlBossAnimationDirectionBrainController
} // namespace app::classes::types
