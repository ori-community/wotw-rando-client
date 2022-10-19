#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossHitReactionBehaviour {
        namespace {
            inline app::SpiderBossHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossHitReactionBehaviour__Class>(type_info, "", "SpiderBossHitReactionBehaviour");
        }
        inline app::SpiderBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossHitReactionBehaviour>(get_class());
        }
    } // namespace SpiderBossHitReactionBehaviour
} // namespace app::classes::types
