#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTongueAttackBehaviour {
        namespace {
            inline app::KwolokBossTongueAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTongueAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossTongueAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTongueAttackBehaviour__Class>(type_info, "", "KwolokBossTongueAttackBehaviour");
        }
        inline app::KwolokBossTongueAttackBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTongueAttackBehaviour>(get_class());
        }
    } // namespace KwolokBossTongueAttackBehaviour
} // namespace app::classes::types
