#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererDesertQuestCompletedInteractionBehaviour {
        namespace {
            app::WandererDesertQuestCompletedInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::WandererDesertQuestCompletedInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererDesertQuestCompletedInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererDesertQuestCompletedInteractionBehaviour__Class>(type_info, "", "WandererDesertQuestCompletedInteractionBehaviour");
        }
        inline app::WandererDesertQuestCompletedInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererDesertQuestCompletedInteractionBehaviour>(get_class());
        }
    } // namespace WandererDesertQuestCompletedInteractionBehaviour
} // namespace app::classes::types
