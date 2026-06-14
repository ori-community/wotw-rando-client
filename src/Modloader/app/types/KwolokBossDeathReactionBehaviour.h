#pragma once
#include <Modloader/app/structs/KwolokBossDeathReactionBehaviour.h>
#include <Modloader/app/structs/KwolokBossDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossDeathReactionBehaviour {
        inline app::KwolokBossDeathReactionBehaviour__Class** type_info() {
            static app::KwolokBossDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossDeathReactionBehaviour__Class>(type_info(), "", "KwolokBossDeathReactionBehaviour");
        }
        inline app::KwolokBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossDeathReactionBehaviour>(get_class());
        }
    } // namespace KwolokBossDeathReactionBehaviour
} // namespace app::classes::types
