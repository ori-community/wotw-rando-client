#pragma once
#include <Modloader/app/structs/GiantSlugDeathReactionBehaviour.h>
#include <Modloader/app/structs/GiantSlugDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GiantSlugDeathReactionBehaviour {
        inline app::GiantSlugDeathReactionBehaviour__Class** type_info() {
            static app::GiantSlugDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GiantSlugDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GiantSlugDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GiantSlugDeathReactionBehaviour__Class>(type_info(), "", "GiantSlugDeathReactionBehaviour");
        }
        inline app::GiantSlugDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::GiantSlugDeathReactionBehaviour>(get_class());
        }
    } // namespace GiantSlugDeathReactionBehaviour
} // namespace app::classes::types
