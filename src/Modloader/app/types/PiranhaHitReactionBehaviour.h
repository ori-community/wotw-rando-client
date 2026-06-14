#pragma once
#include <Modloader/app/structs/PiranhaHitReactionBehaviour.h>
#include <Modloader/app/structs/PiranhaHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaHitReactionBehaviour {
        inline app::PiranhaHitReactionBehaviour__Class** type_info() {
            static app::PiranhaHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaHitReactionBehaviour__Class>(type_info(), "", "PiranhaHitReactionBehaviour");
        }
        inline app::PiranhaHitReactionBehaviour* create() {
            return il2cpp::create_object<app::PiranhaHitReactionBehaviour>(get_class());
        }
    } // namespace PiranhaHitReactionBehaviour
} // namespace app::classes::types
