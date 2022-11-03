#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormShootingBehaviourNew {
        namespace {
            inline app::SandWormShootingBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::SandWormShootingBehaviourNew__Class** type_info = &type_info_ref;
        inline app::SandWormShootingBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormShootingBehaviourNew__Class>(type_info, "Moon", "SandWormShootingBehaviourNew");
        }
        inline app::SandWormShootingBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormShootingBehaviourNew>(get_class());
        }
    } // namespace SandWormShootingBehaviourNew
} // namespace app::classes::types
