#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour {
        namespace {
            inline app::MantisJumpAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MantisJumpAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisJumpAttackBehaviour__Class>(type_info, "", "MantisJumpAttackBehaviour");
        }
        inline app::MantisJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour
} // namespace app::classes::types
