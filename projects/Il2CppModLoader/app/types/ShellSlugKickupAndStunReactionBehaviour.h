#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShellSlugKickupAndStunReactionBehaviour {
        namespace {
            app::ShellSlugKickupAndStunReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::ShellSlugKickupAndStunReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::ShellSlugKickupAndStunReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugKickupAndStunReactionBehaviour__Class>(type_info, "", "ShellSlugKickupAndStunReactionBehaviour");
        }
        inline app::ShellSlugKickupAndStunReactionBehaviour* create() {
            return il2cpp::create_object<app::ShellSlugKickupAndStunReactionBehaviour>(get_class());
        }
    } // namespace ShellSlugKickupAndStunReactionBehaviour
} // namespace app::classes::types
