#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwarmAttackBehaviour__Class.h>
#include <Modloader/app/structs/SwarmAttackBehaviour.h>

namespace app::classes::types {
    namespace SwarmAttackBehaviour {
        namespace {
            inline app::SwarmAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SwarmAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::SwarmAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmAttackBehaviour__Class>(type_info, "", "SwarmAttackBehaviour");
        }
        inline app::SwarmAttackBehaviour* create() {
            return il2cpp::create_object<app::SwarmAttackBehaviour>(get_class());
        }
    } // namespace SwarmAttackBehaviour
} // namespace app::classes::types
