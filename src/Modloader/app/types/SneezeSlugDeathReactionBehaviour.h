#pragma once
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour.h>
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugDeathReactionBehaviour {
        inline app::SneezeSlugDeathReactionBehaviour__Class** type_info() {
            static app::SneezeSlugDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugDeathReactionBehaviour__Class>(type_info(), "", "SneezeSlugDeathReactionBehaviour");
        }
        inline app::SneezeSlugDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugDeathReactionBehaviour>(get_class());
        }
    } // namespace SneezeSlugDeathReactionBehaviour
} // namespace app::classes::types
