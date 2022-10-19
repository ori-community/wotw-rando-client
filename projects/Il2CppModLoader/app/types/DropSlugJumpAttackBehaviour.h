#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugJumpAttackBehaviour {
        namespace {
            inline app::DropSlugJumpAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugJumpAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::DropSlugJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugJumpAttackBehaviour__Class>(type_info, "", "DropSlugJumpAttackBehaviour");
        }
        inline app::DropSlugJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::DropSlugJumpAttackBehaviour>(get_class());
        }
    } // namespace DropSlugJumpAttackBehaviour
} // namespace app::classes::types
