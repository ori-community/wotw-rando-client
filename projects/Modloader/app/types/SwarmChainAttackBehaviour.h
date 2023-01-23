#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwarmChainAttackBehaviour__Class.h>
#include <Modloader/app/structs/SwarmChainAttackBehaviour.h>

namespace app::classes::types {
    namespace SwarmChainAttackBehaviour {
        namespace {
            inline app::SwarmChainAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SwarmChainAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::SwarmChainAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmChainAttackBehaviour__Class>(type_info, "", "SwarmChainAttackBehaviour");
        }
        inline app::SwarmChainAttackBehaviour* create() {
            return il2cpp::create_object<app::SwarmChainAttackBehaviour>(get_class());
        }
    } // namespace SwarmChainAttackBehaviour
} // namespace app::classes::types
