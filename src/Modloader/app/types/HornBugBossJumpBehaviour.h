#pragma once
#include <Modloader/app/structs/HornBugBossJumpBehaviour.h>
#include <Modloader/app/structs/HornBugBossJumpBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossJumpBehaviour {
        inline app::HornBugBossJumpBehaviour__Class** type_info() {
            static app::HornBugBossJumpBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossJumpBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossJumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossJumpBehaviour__Class>(type_info(), "", "HornBugBossJumpBehaviour");
        }
        inline app::HornBugBossJumpBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossJumpBehaviour>(get_class());
        }
    } // namespace HornBugBossJumpBehaviour
} // namespace app::classes::types
