#pragma once
#include <Modloader/app/structs/SpiderBossDeathReactionBehaviour.h>
#include <Modloader/app/structs/SpiderBossDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossDeathReactionBehaviour {
        inline app::SpiderBossDeathReactionBehaviour__Class** type_info() {
            static app::SpiderBossDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossDeathReactionBehaviour__Class>(type_info(), "", "SpiderBossDeathReactionBehaviour");
        }
        inline app::SpiderBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossDeathReactionBehaviour>(get_class());
        }
    } // namespace SpiderBossDeathReactionBehaviour
} // namespace app::classes::types
