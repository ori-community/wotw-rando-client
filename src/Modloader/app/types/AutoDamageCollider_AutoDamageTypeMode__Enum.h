#pragma once
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageTypeMode__Enum.h>
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageTypeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoDamageCollider_AutoDamageTypeMode__Enum {
        inline app::AutoDamageCollider_AutoDamageTypeMode__Enum__Class** type_info() {
            static app::AutoDamageCollider_AutoDamageTypeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AutoDamageCollider_AutoDamageTypeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AutoDamageCollider_AutoDamageTypeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AutoDamageCollider_AutoDamageTypeMode__Enum__Class>(type_info(), "", "AutoDamageCollider", "AutoDamageTypeMode");
        }
        inline app::AutoDamageCollider_AutoDamageTypeMode__Enum* create() {
            return il2cpp::create_object<app::AutoDamageCollider_AutoDamageTypeMode__Enum>(get_class());
        }
    } // namespace AutoDamageCollider_AutoDamageTypeMode__Enum
} // namespace app::classes::types
