#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDeathReactionBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDeathReactionBehaviour {
        inline app::PetrifiedOwlBossDeathReactionBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDeathReactionBehaviour__Class>(type_info(), "", "PetrifiedOwlBossDeathReactionBehaviour");
        }
        inline app::PetrifiedOwlBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDeathReactionBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDeathReactionBehaviour
} // namespace app::classes::types
