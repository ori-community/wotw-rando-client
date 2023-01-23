#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AutoDamageCollider__Class.h>
#include <Modloader/app/structs/AutoDamageCollider.h>

namespace app::classes::types {
    namespace AutoDamageCollider {
        namespace {
            inline app::AutoDamageCollider__Class* type_info_ref = nullptr;
        }
        inline app::AutoDamageCollider__Class** type_info = &type_info_ref;
        inline app::AutoDamageCollider__Class* get_class() {
            return il2cpp::get_class<app::AutoDamageCollider__Class>(type_info, "", "AutoDamageCollider");
        }
        inline app::AutoDamageCollider* create() {
            return il2cpp::create_object<app::AutoDamageCollider>(get_class());
        }
    } // namespace AutoDamageCollider
} // namespace app::classes::types
