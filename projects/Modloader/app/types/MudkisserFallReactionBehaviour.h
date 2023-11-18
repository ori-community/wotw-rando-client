#pragma once
#include <Modloader/app/structs/MudkisserFallReactionBehaviour.h>
#include <Modloader/app/structs/MudkisserFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserFallReactionBehaviour {
        inline app::MudkisserFallReactionBehaviour__Class** type_info() {
            static app::MudkisserFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisserFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisserFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserFallReactionBehaviour__Class>(type_info(), "", "MudkisserFallReactionBehaviour");
        }
        inline app::MudkisserFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MudkisserFallReactionBehaviour>(get_class());
        }
    } // namespace MudkisserFallReactionBehaviour
} // namespace app::classes::types
