#pragma once
#include <Modloader/app/structs/FrogFallReactionBehaviour.h>
#include <Modloader/app/structs/FrogFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogFallReactionBehaviour {
        inline app::FrogFallReactionBehaviour__Class** type_info() {
            static app::FrogFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogFallReactionBehaviour__Class>(type_info(), "", "FrogFallReactionBehaviour");
        }
        inline app::FrogFallReactionBehaviour* create() {
            return il2cpp::create_object<app::FrogFallReactionBehaviour>(get_class());
        }
    } // namespace FrogFallReactionBehaviour
} // namespace app::classes::types
