#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererPostDesertQuestCompletedInteractionBehaviour__Class.h>
#include <Modloader/app/structs/WandererPostDesertQuestCompletedInteractionBehaviour.h>

namespace app::classes::types {
    namespace WandererPostDesertQuestCompletedInteractionBehaviour {
        namespace {
            inline app::WandererPostDesertQuestCompletedInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostDesertQuestCompletedInteractionBehaviour__Class>(type_info, "", "WandererPostDesertQuestCompletedInteractionBehaviour");
        }
        inline app::WandererPostDesertQuestCompletedInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererPostDesertQuestCompletedInteractionBehaviour>(get_class());
        }
    } // namespace WandererPostDesertQuestCompletedInteractionBehaviour
} // namespace app::classes::types
