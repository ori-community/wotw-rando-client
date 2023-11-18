#pragma once
#include <Modloader/app/structs/NickHitReactionBehaviour.h>
#include <Modloader/app/structs/NickHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NickHitReactionBehaviour {
        inline app::NickHitReactionBehaviour__Class** type_info() {
            static app::NickHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NickHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NickHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::NickHitReactionBehaviour__Class>(type_info(), "", "NickHitReactionBehaviour");
        }
        inline app::NickHitReactionBehaviour* create() {
            return il2cpp::create_object<app::NickHitReactionBehaviour>(get_class());
        }
    } // namespace NickHitReactionBehaviour
} // namespace app::classes::types
