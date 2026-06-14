#pragma once
#include <Modloader/app/structs/WandererPostDesertQuestCompletedInteractionBehaviour.h>
#include <Modloader/app/structs/WandererPostDesertQuestCompletedInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererPostDesertQuestCompletedInteractionBehaviour {
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour__Class** type_info() {
            static app::WandererPostDesertQuestCompletedInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererPostDesertQuestCompletedInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostDesertQuestCompletedInteractionBehaviour__Class>(type_info(), "", "WandererPostDesertQuestCompletedInteractionBehaviour");
        }
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererPostDesertQuestCompletedInteractionBehaviour>(get_class());
        }
    } // namespace WandererPostDesertQuestCompletedInteractionBehaviour
} // namespace app::classes::types
