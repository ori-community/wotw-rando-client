#pragma once
#include <Modloader/app/structs/CrabKickUpReactionBehaviour.h>
#include <Modloader/app/structs/CrabKickUpReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabKickUpReactionBehaviour {
        inline app::CrabKickUpReactionBehaviour__Class** type_info() {
            static app::CrabKickUpReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabKickUpReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabKickUpReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabKickUpReactionBehaviour__Class>(type_info(), "", "CrabKickUpReactionBehaviour");
        }
        inline app::CrabKickUpReactionBehaviour* create() {
            return il2cpp::create_object<app::CrabKickUpReactionBehaviour>(get_class());
        }
    } // namespace CrabKickUpReactionBehaviour
} // namespace app::classes::types
