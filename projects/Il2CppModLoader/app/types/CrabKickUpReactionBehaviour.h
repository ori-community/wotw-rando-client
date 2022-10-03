#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabKickUpReactionBehaviour {
        namespace {
            app::CrabKickUpReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::CrabKickUpReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabKickUpReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabKickUpReactionBehaviour__Class>(type_info, "", "CrabKickUpReactionBehaviour");
        }
        inline app::CrabKickUpReactionBehaviour* create() {
            return il2cpp::create_object<app::CrabKickUpReactionBehaviour>(get_class());
        }
    } // namespace CrabKickUpReactionBehaviour
} // namespace app::classes::types
