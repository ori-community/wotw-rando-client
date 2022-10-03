#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossJumpBehaviour {
        namespace {
            app::HornBugBossJumpBehaviour__Class* type_info_ref = nullptr;
        }
        app::HornBugBossJumpBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugBossJumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossJumpBehaviour__Class>(type_info, "", "HornBugBossJumpBehaviour");
        }
        inline app::HornBugBossJumpBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossJumpBehaviour>(get_class());
        }
    } // namespace HornBugBossJumpBehaviour
} // namespace app::classes::types
