#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShootProjectileBehaviourNew__Class.h>
#include <Modloader/app/structs/ShootProjectileBehaviourNew.h>

namespace app::classes::types {
    namespace ShootProjectileBehaviourNew {
        namespace {
            inline app::ShootProjectileBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::ShootProjectileBehaviourNew__Class** type_info = &type_info_ref;
        inline app::ShootProjectileBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::ShootProjectileBehaviourNew__Class>(type_info, "", "ShootProjectileBehaviourNew");
        }
        inline app::ShootProjectileBehaviourNew* create() {
            return il2cpp::create_object<app::ShootProjectileBehaviourNew>(get_class());
        }
    } // namespace ShootProjectileBehaviourNew
} // namespace app::classes::types
