#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossHitReactionBehaviour {
        namespace {
            app::SpiderBossHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossHitReactionBehaviour__Class>(type_info, "", "SpiderBossHitReactionBehaviour");
        }
        inline app::SpiderBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossHitReactionBehaviour>(get_class());
        }
    } // namespace SpiderBossHitReactionBehaviour
} // namespace app::classes::types
