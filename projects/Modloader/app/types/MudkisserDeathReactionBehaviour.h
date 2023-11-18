#pragma once
#include <Modloader/app/structs/MudkisserDeathReactionBehaviour.h>
#include <Modloader/app/structs/MudkisserDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserDeathReactionBehaviour {
        inline app::MudkisserDeathReactionBehaviour__Class** type_info() {
            static app::MudkisserDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisserDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisserDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserDeathReactionBehaviour__Class>(type_info(), "", "MudkisserDeathReactionBehaviour");
        }
        inline app::MudkisserDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::MudkisserDeathReactionBehaviour>(get_class());
        }
    } // namespace MudkisserDeathReactionBehaviour
} // namespace app::classes::types
