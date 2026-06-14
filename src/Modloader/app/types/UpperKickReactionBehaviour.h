#pragma once
#include <Modloader/app/structs/UpperKickReactionBehaviour.h>
#include <Modloader/app/structs/UpperKickReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpperKickReactionBehaviour {
        inline app::UpperKickReactionBehaviour__Class** type_info() {
            static app::UpperKickReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpperKickReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpperKickReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::UpperKickReactionBehaviour__Class>(type_info(), "", "UpperKickReactionBehaviour");
        }
        inline app::UpperKickReactionBehaviour* create() {
            return il2cpp::create_object<app::UpperKickReactionBehaviour>(get_class());
        }
    } // namespace UpperKickReactionBehaviour
} // namespace app::classes::types
