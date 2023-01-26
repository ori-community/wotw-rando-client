#pragma once
#include <Modloader/app/structs/GasballHitReactionBehaviour.h>
#include <Modloader/app/structs/GasballHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballHitReactionBehaviour {
        inline app::GasballHitReactionBehaviour__Class** type_info() {
            static app::GasballHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballHitReactionBehaviour__Class>(type_info(), "", "GasballHitReactionBehaviour");
        }
        inline app::GasballHitReactionBehaviour* create() {
            return il2cpp::create_object<app::GasballHitReactionBehaviour>(get_class());
        }
    } // namespace GasballHitReactionBehaviour
} // namespace app::classes::types
