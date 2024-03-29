#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour {
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossJumpAndSlamBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossJumpAndSlamBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossJumpAndSlamBehaviour__Class>(type_info(), "", "PetrifiedOwlBossJumpAndSlamBehaviour");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour
} // namespace app::classes::types
