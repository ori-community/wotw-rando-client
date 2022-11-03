#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornbugBossHitReactionsBehaviour {
        namespace {
            inline app::HornbugBossHitReactionsBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornbugBossHitReactionsBehaviour__Class** type_info = &type_info_ref;
        inline app::HornbugBossHitReactionsBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornbugBossHitReactionsBehaviour__Class>(type_info, "", "HornbugBossHitReactionsBehaviour");
        }
        inline app::HornbugBossHitReactionsBehaviour* create() {
            return il2cpp::create_object<app::HornbugBossHitReactionsBehaviour>(get_class());
        }
    } // namespace HornbugBossHitReactionsBehaviour
} // namespace app::classes::types
