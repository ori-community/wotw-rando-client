#pragma once
#include <Modloader/app/structs/WandererDesertQuestCompletedInteractionBehaviour.h>
#include <Modloader/app/structs/WandererDesertQuestCompletedInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererDesertQuestCompletedInteractionBehaviour {
        inline app::WandererDesertQuestCompletedInteractionBehaviour__Class** type_info() {
            static app::WandererDesertQuestCompletedInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererDesertQuestCompletedInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererDesertQuestCompletedInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererDesertQuestCompletedInteractionBehaviour__Class>(type_info(), "", "WandererDesertQuestCompletedInteractionBehaviour");
        }
        inline app::WandererDesertQuestCompletedInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererDesertQuestCompletedInteractionBehaviour>(get_class());
        }
    } // namespace WandererDesertQuestCompletedInteractionBehaviour
} // namespace app::classes::types
