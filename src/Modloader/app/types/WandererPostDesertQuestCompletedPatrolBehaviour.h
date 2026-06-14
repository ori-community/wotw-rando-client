#pragma once
#include <Modloader/app/structs/WandererPostDesertQuestCompletedPatrolBehaviour.h>
#include <Modloader/app/structs/WandererPostDesertQuestCompletedPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererPostDesertQuestCompletedPatrolBehaviour {
        inline app::WandererPostDesertQuestCompletedPatrolBehaviour__Class** type_info() {
            static app::WandererPostDesertQuestCompletedPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererPostDesertQuestCompletedPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererPostDesertQuestCompletedPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostDesertQuestCompletedPatrolBehaviour__Class>(type_info(), "", "WandererPostDesertQuestCompletedPatrolBehaviour");
        }
        inline app::WandererPostDesertQuestCompletedPatrolBehaviour* create() {
            return il2cpp::create_object<app::WandererPostDesertQuestCompletedPatrolBehaviour>(get_class());
        }
    } // namespace WandererPostDesertQuestCompletedPatrolBehaviour
} // namespace app::classes::types
