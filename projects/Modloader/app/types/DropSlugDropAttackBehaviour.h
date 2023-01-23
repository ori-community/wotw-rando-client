#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropSlugDropAttackBehaviour__Class.h>
#include <Modloader/app/structs/DropSlugDropAttackBehaviour.h>

namespace app::classes::types {
    namespace DropSlugDropAttackBehaviour {
        namespace {
            inline app::DropSlugDropAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugDropAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::DropSlugDropAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugDropAttackBehaviour__Class>(type_info, "", "DropSlugDropAttackBehaviour");
        }
        inline app::DropSlugDropAttackBehaviour* create() {
            return il2cpp::create_object<app::DropSlugDropAttackBehaviour>(get_class());
        }
    } // namespace DropSlugDropAttackBehaviour
} // namespace app::classes::types
