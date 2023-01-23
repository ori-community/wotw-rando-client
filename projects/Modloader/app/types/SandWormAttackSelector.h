#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormAttackSelector__Class.h>
#include <Modloader/app/structs/SandWormAttackSelector.h>

namespace app::classes::types {
    namespace SandWormAttackSelector {
        namespace {
            inline app::SandWormAttackSelector__Class* type_info_ref = nullptr;
        }
        inline app::SandWormAttackSelector__Class** type_info = &type_info_ref;
        inline app::SandWormAttackSelector__Class* get_class() {
            return il2cpp::get_class<app::SandWormAttackSelector__Class>(type_info, "", "SandWormAttackSelector");
        }
        inline app::SandWormAttackSelector* create() {
            return il2cpp::create_object<app::SandWormAttackSelector>(get_class());
        }
    } // namespace SandWormAttackSelector
} // namespace app::classes::types
