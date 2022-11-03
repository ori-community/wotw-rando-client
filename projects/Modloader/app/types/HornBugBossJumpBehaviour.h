#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugBossJumpBehaviour {
        namespace {
            inline app::HornBugBossJumpBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugBossJumpBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugBossJumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossJumpBehaviour__Class>(type_info, "", "HornBugBossJumpBehaviour");
        }
        inline app::HornBugBossJumpBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossJumpBehaviour>(get_class());
        }
    } // namespace HornBugBossJumpBehaviour
} // namespace app::classes::types
