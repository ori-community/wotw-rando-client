#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossHitReactionBehaviour {
        namespace {
            app::PetrifiedOwlBossHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossHitReactionBehaviour__Class>(type_info, "", "PetrifiedOwlBossHitReactionBehaviour");
        }
        inline app::PetrifiedOwlBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossHitReactionBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossHitReactionBehaviour
} // namespace app::classes::types
