#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossDeathReactionBehaviour {
        namespace {
            app::SpiderBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossDeathReactionBehaviour__Class>(type_info, "", "SpiderBossDeathReactionBehaviour");
        }
        inline app::SpiderBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossDeathReactionBehaviour>(get_class());
        }
    } // namespace SpiderBossDeathReactionBehaviour
} // namespace app::classes::types
