#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossJumpAndSlamBehaviour {
        namespace {
            app::PetrifiedOwlBossJumpAndSlamBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossJumpAndSlamBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossJumpAndSlamBehaviour__Class>(type_info, "", "PetrifiedOwlBossJumpAndSlamBehaviour");
        }
        inline app::PetrifiedOwlBossJumpAndSlamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossJumpAndSlamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossJumpAndSlamBehaviour
} // namespace app::classes::types
