#pragma once
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#include <Modloader/app/structs/ReactionFallingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReactionFallingBehaviour {
        inline app::ReactionFallingBehaviour__Class** type_info() {
            static app::ReactionFallingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReactionFallingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReactionFallingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ReactionFallingBehaviour__Class>(type_info(), "", "ReactionFallingBehaviour");
        }
        inline app::ReactionFallingBehaviour* create() {
            return il2cpp::create_object<app::ReactionFallingBehaviour>(get_class());
        }
    } // namespace ReactionFallingBehaviour
} // namespace app::classes::types
