#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoDamageCollider_AutoDamageValueMode__Enum {
        namespace {
            app::AutoDamageCollider_AutoDamageValueMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AutoDamageCollider_AutoDamageValueMode__Enum__Class** type_info = &type_info_ref;
        inline app::AutoDamageCollider_AutoDamageValueMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AutoDamageCollider_AutoDamageValueMode__Enum__Class>(type_info, "", "AutoDamageCollider", "AutoDamageValueMode");
        }
        inline app::AutoDamageCollider_AutoDamageValueMode__Enum* create() {
            return il2cpp::create_object<app::AutoDamageCollider_AutoDamageValueMode__Enum>(get_class());
        }
    } // namespace AutoDamageCollider_AutoDamageValueMode__Enum
} // namespace app::classes::types
