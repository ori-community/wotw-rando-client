#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererPostDesertQuestCompletedPatrolBehaviour {
        namespace {
            inline app::WandererPostDesertQuestCompletedPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererPostDesertQuestCompletedPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPostDesertQuestCompletedPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostDesertQuestCompletedPatrolBehaviour__Class>(type_info, "", "WandererPostDesertQuestCompletedPatrolBehaviour");
        }
        inline app::WandererPostDesertQuestCompletedPatrolBehaviour* create() {
            return il2cpp::create_object<app::WandererPostDesertQuestCompletedPatrolBehaviour>(get_class());
        }
    } // namespace WandererPostDesertQuestCompletedPatrolBehaviour
} // namespace app::classes::types
