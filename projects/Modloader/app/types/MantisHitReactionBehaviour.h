#pragma once
#include <Modloader/app/structs/MantisHitReactionBehaviour.h>
#include <Modloader/app/structs/MantisHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisHitReactionBehaviour {
        inline app::MantisHitReactionBehaviour__Class** type_info() {
            static app::MantisHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisHitReactionBehaviour__Class>(type_info(), "", "MantisHitReactionBehaviour");
        }
        inline app::MantisHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisHitReactionBehaviour>(get_class());
        }
    } // namespace MantisHitReactionBehaviour
} // namespace app::classes::types
