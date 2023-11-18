#pragma once
#include <Modloader/app/structs/HitReactionBehaviour.h>
#include <Modloader/app/structs/HitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionBehaviour {
        inline app::HitReactionBehaviour__Class** type_info() {
            static app::HitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviour__Class>(type_info(), "Moon", "HitReactionBehaviour");
        }
        inline app::HitReactionBehaviour* create() {
            return il2cpp::create_object<app::HitReactionBehaviour>(get_class());
        }
    } // namespace HitReactionBehaviour
} // namespace app::classes::types
