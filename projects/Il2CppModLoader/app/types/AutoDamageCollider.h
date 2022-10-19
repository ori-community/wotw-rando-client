#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
