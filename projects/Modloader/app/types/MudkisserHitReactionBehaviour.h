#pragma once
#include <Modloader/app/structs/MudkisserHitReactionBehaviour.h>
#include <Modloader/app/structs/MudkisserHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserHitReactionBehaviour {
        inline app::MudkisserHitReactionBehaviour__Class** type_info() {
            static app::MudkisserHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisserHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisserHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserHitReactionBehaviour__Class>(type_info(), "", "MudkisserHitReactionBehaviour");
        }
        inline app::MudkisserHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MudkisserHitReactionBehaviour>(get_class());
        }
    } // namespace MudkisserHitReactionBehaviour
} // namespace app::classes::types
